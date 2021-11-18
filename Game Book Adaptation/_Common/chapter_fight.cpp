#include "chapter_fight.h"
#include "../_Common/dice.h"
#include "book.h"
#include "crew.h"
#include "Global_Variables.h"

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

#pragma region fight
	if (type_ == ship_fight)
	{
		//print starting power
		std::cout << "\nTon vaisseau : " << spaceShip.get_habil() << ", " << spaceShip.get_endu() << '\n'
			<< "Vaisseau adverse : " << monstres_.at(0).get_habil() << ", " << monstres_.at(0).get_endu() << '\n';

		do
		{
			//fire
			int playerScore = dice.dices_total(spaceShip.get_habil());
			int enemyScore = dice.dices_total(monstres_.at(0).get_habil());
			int result = playerScore - enemyScore;

			//print the firing power
			std::cout << "Tes canons tirent avec une puissance de " << playerScore
				<< "\nEt le vaisseau ennemi réplique avec " << enemyScore << '\n';

			if (result == 0)
			{
				std::cout << "Aucun dommage subit.\n";
			}
			else
			{
				if (result > 0)
				{
					//Player deals damage
					std::cout << "Tu as infligé " << result << " dégâts!\n";

					if (monstres_.at(0).lose_life(result))
					{
						//enemy died
						std::cout << "Ce qui a fait explosé le vaisseau adverse !\n";
						success = true;
						break;
					}
				}
				else
				{
					//le joueur prend des dégâts
					std::cout << "Ton vaisseau a subît " << -result << " dégâts!\n";
					if (spaceShip.lose_life(-result))
					{
						//joueur perd
						return 2;
					}
				}
			}

			//Print the life values
			std::cout << "Toi : " << spaceShip.get_endu() << '\n'
				<< "Ennemi : " << monstres_.at(0).get_endu() << '\n';
		} while (true);
	}
	else if (type_ == hand_fight)
	{
		//Everyone fight someone at random
	}
	else
	{
		//Choose a target and shoot
	}
#pragma endregion

	//If there is no option, send back the only destination
	if (destinations_.size() == 1)
		return destinations_.at(0);

	//Give the user the choice
	return get_destination(destinations_);
}


std::vector<int> chapter_fight::chooseFighters(std::vector<crew>& crews)
{
	std::vector<int> validFighters;
	//Find out all non-assisstant crew member
	for (int i = 0; i < crews.size() ; i++)
	{
		if (!crews[i].isAssist())
		{
			validFighters.emplace_back(i);
		}
	}

	//if there's only 3 or less fighters, just return all valid ones
	if (validFighters.size() <= FIGHTERS_NUM)
		return validFighters;

	//Show the possible fighters and select them
	std::vector<int> selectedFighters;
	do
	{
		std::cout << "Qui va se battre?\n";
		//print the crew
		for (int i = 0; i < validFighters.size(); i++)
		{
			std::cout << i << " : " << crew::jobToString(crews.at(i).getJob()) << '\n';
		}

		int ans;
		std::cin >> ans;
		try
		{
			//find if the selected crew is in validFighters
			std::vector<int>::iterator it = std::find(validFighters.begin(), validFighters.end(), ans);
			if (it != validFighters.end())
			{
				//Add the crew number to selected fighters and remove it from valid Fighters
				selectedFighters.emplace_back(ans);
				validFighters.erase(it, it);
			}
		}
		catch (...)
		{
			//Tell the user to use only numbers
			std::cout << "Please put a number\n";
		}

	} while (selectedFighters.size() < FIGHTERS_NUM);


	return selectedFighters;
}
