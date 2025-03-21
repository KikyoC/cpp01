#include "Zombie.hpp"

int main(void)
{
	randomChump("Dead man");
	Zombie *zb = newZombie("Dead or alive");
	zb->announce();
	delete zb;
}
