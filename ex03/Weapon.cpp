#include "Weapon.hpp"

Weapon::Weapon(std::string name) : type(name)
{
	return ;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	return (this->type);
}
