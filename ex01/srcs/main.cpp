#include <iostream>
#include <string>
#include "iter.hpp"

int main( void ) {
	int a[] = {1, 2, 3, 4, 5};
	char b[] = {'a', 'b', 'c', 'd', 'e'};
	std::cout << "iter with a function template instance for int var\n";
	iter(a, 5, function);
	std::cout << "iter with a function for int var\n";
	iter(a, 5, function2);
	std::cout << "iter with a function template instance of char var\n";
	iter(b, 5, function);
	return 0;
}
