#include "ship.h"



ship::ship(int endu, int habil) : basic(endu, habil)
{
	endurance_max_ = endu;

	std::cout << "j'ai ete cree" << std::endl;
}
