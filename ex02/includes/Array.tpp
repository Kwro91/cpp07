#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "../includes/Array.hpp"

#define LOGS //Put in commentary for disable log messages

//////////////////////////////////////////////////////////////////////////
template <typename T>
const char	*Array<T>::OutOfRangeException::what() const throw(){
	return ("Exception: Index of [n] out of range!");
}
//////////////////////////////////////////////////////////////////////////

template <typename T>
Array<T>::Array() : _size(0) {
	#ifdef LOGS
		std::cout << GREEN << "Empty array created." << WHITE << std::endl;
	#endif
    _array = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned long size) : _size(size) {
	#ifdef LOGS
		std::cout << GREEN << "Array created with " << _size << " size." << WHITE << std::endl;
	#endif
    _array = new T[_size]();
}

template <typename T>
Array<T>::~Array(){
	#ifdef LOGS
		std::cout << RED << "Array deleted with " << _size << " size." << WHITE << std::endl;
	#endif
    delete[] _array;
}

template <typename T>
Array<T>::Array(const Array &a){
	_size = a._size;
	_array = new T[_size]();
	*this = a;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &a){
	delete[] _array;
	_size = a._size;
	_array = new T[_size];
	for (unsigned int i = 0 ; i < _size ; i++)
		_array[i] = a._array[i];
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int u){
	if (u >= _size)
		throw Array<T>::OutOfRangeException();
	return (_array[u]);
}

template <typename T>
const unsigned int	&Array<T>::size() const{
	return (_size);
}

#endif