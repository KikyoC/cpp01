#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
	this->harl[0] = &Harl::debug;
	this->harl[1] = &Harl::info;
	this->harl[2] = &Harl::warning;
	this->harl[3] = &Harl::error;
}

void Harl::debug()
{
	std::cout << "[DEBUG]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::warning()
{
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "[ERROR]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::info()
{
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<std::endl;
}

void Harl::complain(std::string level)
{
	std::string lvls[5] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	for (int i = 0; i < 4; i++)
		if (lvls[i] == level)
			(this->*harl[i])();
}
