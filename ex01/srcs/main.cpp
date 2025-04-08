#include "../includes/Iter.hpp"

void	invertValue(int &i){
	i = -i;
}

void	addHello(std::string &s){
	if (s.empty())
		return ;
	s = "Hello " + s;
}

void	add42(int &i){
	i += 42;
}

int main (){
	{ //test with int *
		std::cout << "Test invert value" << std::endl;
		int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Before :" << WHITE << std::endl;
		for (size_t i = 0; i < 10 ; i++)
		{
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
		}
		iter(a, 10, invertValue);
		std::cout << ROSE << "After :" << WHITE << std::endl;
		for (size_t i = 0; i < 10 ; i++)
		{
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
		}
	}
	std::cout << BLUE << "///////////////////////////////////////////////" << WHITE << std::endl;
	{ //test with add 42
		std::cout << "Test add 42" << std::endl;
		int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		std::cout << GREEN << "Before :" << WHITE << std::endl;
		for (size_t i = 0; i < 10 ; i++)
		{
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
		}
			iter(a, 10, add42);
		std::cout << ROSE << "After :" << WHITE << std::endl;
		for (size_t i = 0; i < 10 ; i++)
		{
			std::cout << "a[" << i << "] = " << a[i] << std::endl;
		}
	}

	std::cout << BLUE << "///////////////////////////////////////////////" << WHITE << std::endl;
	{ //test with string *
		std::cout << "Test add Hello" << std::endl;
		std::string s[10] ={"Robert", "Gerard", "Lucie", "Benoit", "Yuki", "Inspiration.exe", "Sept", "Pitichat", "Goku", "Jett"};
		std::cout << GREEN << "Before :" << WHITE << std::endl;
		for (size_t i = 0; i < 10 ; i++)
		{
			std::cout << "s[" << i << "] = " << s[i] << std::endl;
		}
		iter(s, 10, addHello);
		std::cout << ROSE << "After :" << WHITE << std::endl;
		for (size_t i = 0; i < 10 ; i++)
		{
			std::cout << "s[" << i << "] = " << s[i] << std::endl;
		}
	}
	std::cout << BLUE << "///////////////////////////////////////////////" << WHITE << std::endl;
	{ //test with NULL
		std::cout << "Test with NULL ptr" << std::endl;
		std::string *a = NULL;
		iter(a, 10, addHello);
	}
	std::cout << BLUE << "///////////////////////////////////////////////" << WHITE << std::endl;
}
