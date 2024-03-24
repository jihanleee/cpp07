#ifndef whatever_HPP
# define whatever_HPP

template<typename T> void swap(T & a, T & b);
template<typename T> T min(T & a, T & b);
template<typename T> T max(T & a, T & b);

template<typename T> void swap(T & a, T & b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template<typename T> T min(T & a, T & b) {
	if (a < b)
		return a;
	return b;
}

template<typename T> T max(T & a, T & b) {
	if (a > b)
		return a;
	return b;
}

#endif