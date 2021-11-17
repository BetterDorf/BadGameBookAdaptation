#pragma once
#include "basic.h"
#include "gentil.h"
enum crew_job
{
	commandant,
	medic,
	sientifique,
	malabar,
	pilote, 
};


class crew : public gentil
{
	crew_job job_;
public:
	crew(int endu, int habil,crew_job);
	 
	bool assist = false; 
	
	void die() override;
};

