#include <iostream>

int main(void)
{
	std::string		loco = "HI THIS IS BRAIN";
	std::string*	stringPTR = &loco;
	std::string&	stringREF = loco;

	std::cout << &loco << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << loco << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


}