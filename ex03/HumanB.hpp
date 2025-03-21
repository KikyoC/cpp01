#pragma once
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &wp);
		void attack();
	private:
		std::string name;
		Weapon *wp;
};
