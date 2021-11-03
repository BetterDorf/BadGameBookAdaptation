#include "Crew.h"
#include <iostream>
#include "gentil.h"

crew::crew(int endu, int habil, crew_job job) : gentil(endu, habil)
{
	job_ = job;
	std::cout << "j'ai ete cree" << std::endl;
}

void crew::die()
{
	
}
