#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie()
{

}

void Zombie::announce()
{
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroyed " << this->name << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
