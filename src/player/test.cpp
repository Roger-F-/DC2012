#include "GOM_Projectile.h"
#include <iostream>

// testing functionality of the GOM_Projectile class 2012/03/08
int main()
{
	GOM_Projectile projectile(123,	// object id
							  5,	// x coordinate
							  5,	// y coordinate
							  1,	// player id
							  50,	// speed
							  30,	// ttl
							  100) ;// damage
	projectile.print(std::cout);
}