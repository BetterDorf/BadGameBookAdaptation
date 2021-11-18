#include <map>

#include "../_Common/book.h"
#include "../_Common/crew.h"
#include "../_Common/ship.h"
#include "../_Common/dice.h"
#include "../_Common/monstre.h"
#include "../_Common/Global_Variables.h"
#include "../_Common/chapter_fight.h"

int main()
{
	//Create the dice
	dices dice;

	//Make the crew and ship

	ship spaceShip = ship(dice.dices_total(HEALTH_DICE) + HEALTH_SCORE, dice.dices_total(HABIL_DICE) / 2 + HABIL_SCORE);
	std::cout << spaceShip.get_habil() << " " << spaceShip.get_endu() << '\n';
	std::vector<crew> crews;

	for (int i_job = 0; i_job != last; i_job++)
	{
		crew_job job = static_cast<crew_job>(i_job);
		crews.emplace_back(dice.dices_total(HEALTH_DICE) + HEALTH_SCORE, dice.dices_total(HABIL_DICE) / 2 + HABIL_SCORE, job);
	}


	//Create the chapters
	const book story;


	//Play the story
	//play the first chapter which gives us back the next chapter's index
	int next_chapter = story.chapters.begin()->second->play(crews, spaceShip);
	do
	{
		//Check if the chapter index we have is valid
		if (story.chapters.find(next_chapter) == story.chapters.end())
			break;

		//Play the next chapter and get a new next chapter value
		next_chapter = story.chapters.at(next_chapter)->play(crews, spaceShip);
	} while (next_chapter >= 0);
} 