#include <string>

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

class Zombie {
	public:
		Zombie();
		void setName(std::string name);
		~Zombie();
		void announce();
	private:
		std::string name;
};

Zombie *zombieHorde(int N, std::string name);

#endif
