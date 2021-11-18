#include "Crew.h"
#include <iostream>
#include "gentil.h"
#include "../_Common/dice.h"

crew::crew(int endu, int habil, crew_job job) : gentil(endu, habil)
{
	job_ = job;
}

void crew::die()
{
	dices des;
	habillite_ -= 1;
	endurance_ = des.dices_total(4);

	assist = true; 
}

const crew_job crew::getJob()
{
	return job_;
}

const bool crew::isAssist()
{
	return assist;
}

std::string crew::jobToString(crew_job job)
{
	switch (job)
	{
	case commandant: return "commandant";
	case medic: return "medic";
	case scientifique: return "scientifique";
	case malabar: return "malabar";
	case pilote: return "pilote";
	case last: return "NOT SUPPOSED TO BE PRINTED/INVALID JOB";
	default: ;
	}
}
