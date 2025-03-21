#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name)
{
	this->wp = NULL;
	this->name = name;
}

void HumanB::setWeapon(Weapon &wp)
{
	this->wp = &wp;
}

void HumanB::attack()
{
	// std::cout << this->name << " attack with their " << (this->wp != NULL ? this->wp->getType() : "hands") << std::endl;
	std::cout << this->name << " attack with their " << this->wp->getType() << std::endl;
}
