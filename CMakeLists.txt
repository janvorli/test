project (hello-cmake)
set(CMAKE_CONFIGURATION_TYPES "Debug;Release;Profile" CACHE STRING "" FORCE) 
set(CMAKE_C_FLAGS_PROFILE "/Od /ZI")
set(CMAKE_CXX_FLAGS_PROFILE "/Od /ZI")

set(CMAKE_EXE_LINKER_FLAGS_PROFILE "/DEBUG /PROFILE")
add_executable(hello-cmake hello.cpp)
find_package (sqlite3 REQUIRED)
add_executable(my-hello-target hello2.cpp)
target_link_libraries(my-hello-target  PRIVATE sqlite3)

install (TARGETS my-hello-target DESTINATION hello/bin)
