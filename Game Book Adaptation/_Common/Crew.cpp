#include "Crew.h"
#include <iostream>
#include "gentil.h"
#include "../_Common/dice.h"

crew::crew(int endu, int habil, crew_job job) : gentil(endu, habil)
{
	job_ = job;
	std::cout << "j'ai ete cree" << std::endl;
}

void crew::die()
{
	dices des;
	habillite_ -= 1;
	endurance_ = des.dices_total(4);

	assist = true; 
}
