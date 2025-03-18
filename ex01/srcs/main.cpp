#include "../includes/Iter.hpp"

int	invertValue(int i){
	return (-i);
}

std::string	addHello(std::string s){
	s = "Hello " + s;
	return (s);
}

int main (){
	{
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
	{
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


}