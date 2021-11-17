#include "chapter_fight.h"


bool shipFight()
{

}

int chapter_fight::play()
{
	//Show the text
	std::cout << this->text_ << std::endl;

	//Fight
	bool success = false;
	if (type_ == fight_type::ship)
		success = shipFight();

	//If there is no option, send back the only destination
	if (destinations_.size() == 1)
		return destinations_.at(0);

	//Give the user the choice
	return get_destination(destinations_);
}