#include "Zombie.hpp"
#include <string>

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int z = 0; z < N; z++)
		horde[z].setName(name);
	return (horde);
}
