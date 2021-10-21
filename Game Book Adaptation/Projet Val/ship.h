#pragma once
#include "basic.h"


class ship : basic
{
	int endurance_max_ = 0;
public:
	ship(int endu, int habil);
};
