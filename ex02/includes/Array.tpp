#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array() : _size(0) {
    _array = new T[_size];
}

template <typename T>
Array<T>::Array(unsigned long size) : _size(size) {
    _array = new T[_size];
}

template <typename T>
Array<T>::~Array(){
    delete _array;
}

#endif