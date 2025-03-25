#include "../includes/Array.hpp"

int main (){
	try {
		int *b = new int();
		std::cout << ROSE << "Test du sujet avec auto initialisation: int*=" << *b << WHITE << std::endl;
		delete b;
		
		unsigned int size = 10;
		Array<int> a(size);
		std::cout << BLUE << "Test avec initialisation auto:" << WHITE << std::endl;
		for (unsigned int i = 0 ; i < a.size() ; i++)
		{
			std::cout << "array[" << i << "]: " << a[i] << std::endl;
		}
		std::cout << BLUE << "Test avec initialisation manuelle:" << WHITE << std::endl;
		for (unsigned int i = 0 ; i < a.size() ; i++)
		{
			a[i] = i;
			std::cout << "array[" << i << "]: " << a[i] << std::endl;
		}

		// std::cout << a[10] << std::endl; //For Exception test

		std::cout << BLUE << "Test avec constructeur par copie:" << WHITE << std::endl;
		Array<int> a2(a);
		for (unsigned int i = 0 ; i < a2.size() ; i++)
			std::cout << "array2[" << i << "]: " << a2[i] << std::endl;
			
		std::cout << BLUE << "Test avec operator=:" << WHITE << std::endl;
		Array<int> a3;
		a3 = a2;
		for (unsigned int i = 0 ; i < a3.size() ; i++)
			std::cout << "array3[" << i << "]: " << a3[i] << std::endl;

	} catch (std::exception &e) {
		std::cerr << YELLOW << e.what() << WHITE << std::endl;
	}
    return (0);
}
