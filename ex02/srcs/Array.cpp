#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	/*constructor*/
	_array = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned long n) {
	/*constructor*/
	_array = new T[n];
	_size = n;
}

template <typename T>
Array<T>::~Array() {
	/*destructor*/
	delete[] _array;
}

template <typename T>
Array<T>::Array(const Array & a) {
	/*copy constructor*/
	_array = new T[a.size()];
	T* rarray = const_cast<T*>(_array);
	for (size_t i = 0; i < a.size(); i++)
		rarray[i] = const_cast< Array<T> & >(a)[i];
	_size = a.size();
}

template<typename T>
Array<T> & Array<T>::operator=(const Array<T> &a) {
	/*copy assignment operator*/
	delete[] _array;
	_array = new T[a.size()];
	T* rarray = const_cast<T*>(_array);
	for (size_t i = 0; i < size(); i++)
		rarray[i] = const_cast< Array<T> & >(a)[i];

	_size = a.size();
	return (*this);
}

template<typename T>
T & Array<T>::operator [] (unsigned long index) {
	if (index > _size - 1)
		throw std::exception();
	return (_array[index]);
}

template<typename T>
size_t Array<T>::size() const {
	return (_size);
}
