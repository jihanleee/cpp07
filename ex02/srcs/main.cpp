#include "Array.hpp"

#include <iostream>
int main( void ) {

	/*Array class instantiation */
	std::cout << "Array class instantiation test\n";
	Array<int> array(10);
	for (size_t i = 0; i < 10; i++)
		array[i] = (int)i;
	for (size_t i = 0; i < 10; i++)
		std::cout << array[i] << std::endl;
	std::cout << "sizeof array: " << array.size() << std::endl;	

	/*Array copy constructor*/
	std::cout << "copy constructor(deep copy) test\n";
	Array<int> copiedArray(array);
	std::cout << "printing elements\n";
	for (size_t i = 0; i < 10; i++)
		std::cout << copiedArray[i] << std::endl;
	std::cout << "sizeof Copied array: " << copiedArray.size() << std::endl;	

	/*Array copy assignement operator*/
	std::cout << "copy assignement operator test\n";
	Array<int> copyAssignementArray = copiedArray;
	Array<int> emptyArray;
	for (size_t i = 0; i < 10; i++)
		std::cout << copyAssignementArray[i] << std::endl;
	std::cout << "sizeof array copied by copy assignement operator: " << array.size() << std::endl;

	/*exception test block*/
	std::cout << "exception test\n";
	try {
		for (size_t i = 0; i < 11; i++)
			std::cout << array[i] << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "exception thrown\n";
	}
	return 0;
}
