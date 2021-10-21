#include "Crew.h"


crew::crew(int endu, int habil, crew_job job) : basic(endu, habil)
{
	endurance_max_ = endu;
	job_ = job;
}
