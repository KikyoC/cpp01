#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(4, "John");
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete [] horde;
}
