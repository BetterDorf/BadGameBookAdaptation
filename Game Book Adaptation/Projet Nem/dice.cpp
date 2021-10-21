#include "dice.h"

dices::dices()
{
	//Setup the random
	std::random_device rd;
	gen_ = std::mt19937(rd());

	//Determine the range
	dice_range_ = std::uniform_int_distribution<int>(1, 6);
}

int dices::normal_dice()
{
	return dice_range_(gen_);
}

int dices::exploding_dice()
{
	int result;
	int total = 0;
	do
	{
		result = normal_dice();
		total += result;
	} while (result == dice_range_.max());

	return total;
}

int dices::dices_total(int amount)
{
	int total = 0;
	for (int dice = 0 ; dice < amount ; dice++)
	{
		total += exploding_dice();
	}

	return total;
}

std::vector<int> dices::exploding_dices(int amount)
{
	std::vector<int> results;
	results.reserve(amount);
	for (int dice = 0; dice < amount; dice++)
	{
		results.emplace_back(exploding_dice());
	}

	return results;
}
