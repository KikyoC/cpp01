#pragma once
#include <string>
class Harl
{
	public:
		void	complain(std::string level);
		Harl();
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		void other(void);
		void (Harl::*harl[5])();
};
