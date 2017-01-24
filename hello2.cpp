#include <iostream>
#include <sqlite3.h>

int main(int argc, char** argv)
{
	std::cout << "Hello2" << std::endl;
	std::cout << sqlite3_libversion() << std::endl;

	return 0;
}