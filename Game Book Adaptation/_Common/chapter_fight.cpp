#include "chapter_fight.h"
#include "../_Common/dice.h"
#include "book.h"

chapter_fight::chapter_fight(fight_type type, std::string text, std::vector<int> destinations,std::vector<monstre> monstres)
	: chapter_node(text, destinations)
{
	monstres_ = monstres;
	type_ = type;
}


int chapter_fight::play(std::vector<crew>& crews, ship& spaceShip)
{
	dices dice;

	//Show the text
	std::cout << this->text_ << std::endl;

	//Fight
	bool success = false;

	switch (type_)
	{
	case ship_fight :
		do
		{
			//fire
			int result = dice.dices_total(spaceShip.get_habil()) - dice.dices_total(monstres_.at(0).get_habil());

			if (result != 0)
			{
				std::cout << result << '\n';
				if (result > 0)
				{
					if (monstres_.at(0).lose_life(result))
					{
						success = true;
						break;
					}
				}
				else
				{
					if (spaceShip.lose_life(-result))
					{
						return 2;
					}
				}
			}
		}
		while (true);
		break;
	}

	//If there is no option, send back the only destination
	if (destinations_.size() == 1)
		return destinations_.at(0);

	//Give the user the choice
	return get_destination(destinations_);
}


std::vector<int> chapter_fight::chooseFighters(std::vector<gentil>& crews)
{
	std::vector<int> validFighters;
	return std::vector<int> {1};
}
