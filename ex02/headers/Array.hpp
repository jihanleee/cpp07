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
		Array(unsigned long n);
		~Array();
		Array(const Array & a);

		Array & operator = (const Array & a);

		T & operator [] (unsigned long index);
		void * operator new[] (unsigned long index);

		size_t size() const;
};

/*instantiation of class template of Array*/
template class Array<int>;
#endif