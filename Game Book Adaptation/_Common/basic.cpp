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

bool basic::lose_life(int amount)
{
	endurance_ -= amount;

	if (is_dead())
		die();

	return is_dead();
}

bool basic::is_dead()
{
	if (endurance_ <= 0)
	{
		return true;
	}
	return false;
}