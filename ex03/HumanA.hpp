#pragma once

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &wp);
		void attack();
	private:
		std::string name;
		Weapon &wp;
};
