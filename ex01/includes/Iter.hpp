#include <iostream>
#define WHITE "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define ROSE "\033[1;35m"
#define CYAN "\033[1;36m"

template <typename T, typename F> void	iter(T *a, size_t l, F f)
{
	for (size_t i = 0 ; i < l ; i++)
	{
		a[i] = f(a[i]);
	}
}