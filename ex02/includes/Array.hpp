#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

#define WHITE "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define ROSE "\033[1;35m"
#define CYAN "\033[1;36m"

template <typename T>
class Array {
    private :
        T               *_array;
        unsigned int    _size;
    public :
        Array();
        Array(unsigned long size);
        ~Array();
		Array(const Array &a);
		Array	&operator=(const Array &a);
		
		T					&operator[](unsigned int u);
		const unsigned int	&size() const;

		class OutOfRangeException : public std::exception {
			public:
				const char	*what() const throw();
		};

};
#include "Array.tpp"
#endif