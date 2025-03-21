#include <iostream>
#include <string>

int main()
{
	std::string base = "HI THIS IS BRAIN";

	std::string *stringPTR = &base;
	std::string &stringREF = base;

	std::cout << &base << " " << &stringPTR << " " << &stringREF << std::endl;
	std::cout << base << " " << *stringPTR << " " << stringREF << std::endl;
}
