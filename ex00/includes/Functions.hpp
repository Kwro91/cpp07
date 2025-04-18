#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include "iostream"

template <typename T> 
void swap(T &a, T &b)
{
	T save;
	save = a;
	a = b;
	b = save;
}

template <typename T> 
T min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T> 
T max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif