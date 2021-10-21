#pragma once
#include <iostream>

class basic
{
protected:
	int habillite_ = 0;
	int endurance_ = 0;
public:
	basic(int, int );
	int get_endu();
	int get_habil();
	
	bool lose_life(int amount);
	
};



