#pragma once
#include <iostream>

class basic
{
protected:
	int habillite_ = 0;
	int endurance_ = 0;
public:
	basic(int endu, int habil);
	int get_endu();
	int get_habil();
	
	void lose_life(int amount);

	bool is_dead();
	virtual void die() {};
};



