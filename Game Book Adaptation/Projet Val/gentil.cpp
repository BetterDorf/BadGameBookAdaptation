#include <iostream>
#include "basic.h"
#include "gentil.h"


gentil::gentil(int endu, int habil) : basic(endu,habil)
{
	endurance_max = endu;
}

void gentil::heal(int amount)
{
	endurance_ += amount;
	if(endurance_max <= endurance_)
	{
		endurance_ = endurance_max;
	}
}