#include "basic.h"

basic::basic(int endu, int habil)
{
	habillite_ = habil;
	endurance_ = endu;

}

int basic::get_endu()
{
	return endurance_;
}
int basic::get_habil()
{
	return habillite_;
}

void basic::lose_life(int amount)
{
	endurance_ -= amount;

}

bool basic::is_dead()
{
	if (endurance_ <= 0)
	{
		return true;
	}
	return false;
}