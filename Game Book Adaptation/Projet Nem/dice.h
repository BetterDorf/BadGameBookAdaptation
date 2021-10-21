#pragma once
#include <random>

class dices
{
	std::uniform_int_distribution<> dice_range_;
	std::mt19937 gen_;

public:
	dices();
	int normal_dice();
	int exploding_dice();
	int dices_total(int amount);
	std::vector<int> exploding_dices(int amount);
};