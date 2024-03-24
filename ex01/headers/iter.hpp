#ifndef iter_HPP
# define iter_HPP
# include <string.h>

template<typename T> void function(T &target){
	std::cout<< ++target << std::endl;
}

void function2(int &target){
	std::cout<< ++target << std::endl;
}

template<typename T> void iter(T *array, size_t length, void function(T &)) {
	size_t i;

	for (i = 0; i < length; i++) {
		function(array[i]);
	}
}

#endif