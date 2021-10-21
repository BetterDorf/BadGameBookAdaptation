#include "Crew.h"
#include <iostream>

crew::crew(int endu, int habil, crew_job job) : basic(endu, habil)
{
	endurance_max_ = endu;
	job_ = job;
	std::cout << "j'ai ete cree" << std::endl;
}
