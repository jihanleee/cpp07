#ifndef Array_HPP
# define Array_HPP
# include <iostream>
# include <string>
# include <exception>

template <typename T>
class Array {
	private:
		T * _array;
		size_t _size;
	public:
		Array();
		~Array();
		Array(const Array & a);
		Array & operator = (const Array & a);
		Array & operator [] (size_t index);
		Array & operator new[] (size_t index);
};

Array::Array() {
	/*constructor*/
}
Array::Array(size_t n) {
	/*constructor*/
}
~Array::Array() {
	/*destructor*/
}
Array::Array(const Array & a) {
	/*copy constructor*/
}
Array & Array::operator = (const Array & a) {
	/*copy assignment operator*/
}


#endif