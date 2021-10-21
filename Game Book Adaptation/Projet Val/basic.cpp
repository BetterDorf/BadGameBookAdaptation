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

bool lose_life = 10 
