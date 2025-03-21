#include <cstdio>
#include <ios>
#include <fstream>
#include <iostream>
#include <string>

void replace(std::string str, std::string origin, std::string next, std::ofstream &out)
{
	int j;
	(void)origin;
	(void)next;
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == origin[0])
		{
			for (j = 0; origin[j]; j++)
			{
				if (origin[j] != str[i + j])
					break;
			}
			if (j == (int)origin.length())
			{
				out << next;
				i += j - 1;
				continue ;
			}
		}
		out << str[i];
	}
}


int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "You have to provide only name of file, char sequence to replace and to repace char sequence" << std::endl;
		return (1);
	}
	std::ifstream in(argv[1], std::ios::in);
	if (!in.is_open())
	{
		std::cerr << "Cannot open file " << argv[1] << ". Please chech that the file exists and you have enough permissions" << std::endl;
		return (1);
	}
	std::ofstream out((std::string(argv[1]) + std::string(".replace")).c_str(), std::ios::out);
	std::string str;

	if (out.is_open() && std::getline(in, str, '\0'))
		replace(str, argv[2], argv[3], out);
	else
		std::cerr << "Cannot open file " << argv[1] << ".replace. Please check if you have enough permissions" << std::endl;
	if (in.is_open())
		in.close();
	if (out.is_open())
		out.close();
}
