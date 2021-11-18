#pragma once
#include "basic.h"
#include "gentil.h"
enum crew_job
{
	commandant = 0,
	medic,
	sientifique,
	malabar,
	pilote,
	last
};


class crew : public gentil
{
	crew_job job_;
	bool assist = false;
public:
	crew(int endu, int habil, crew_job);

	const bool isAssist();
	const crew_job getJob();

	void die() override;
};

