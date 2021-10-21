#pragma once
#include "basic.h"
enum crew_job
{
	commandant,
	medic,
	sientifique,
	malabar,
	pilote, 
};


class crew : public basic
{
	int endurance_max_ = 0;
	crew_job job_;
public:
	crew(int endu, int habil,crew_job);
};

