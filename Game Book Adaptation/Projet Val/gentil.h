#pragma once
#include "basic.h"
#include <iostream>
#include "../_Common/dice.h"

class gentil : public basic
{
protected:
	int endurance_max = 0;

public:
	gentil(int endu, int habil);

	void heal(int amount);


};