#pragma once
#include "chapter_node.h"
#include "../_Common/monstre.h"
#include "vector"

enum fight_type 
{
	hand_fight = 0,
	laser_fight = 1,
	ship_fight = 2
};

class chapter_fight : public chapter_node
{
private:
	fight_type type_ = ship_fight;
	std::vector<monstre> monstres_;

	std::vector<int> chooseFighters(std::vector<gentil>& crews);
public:
	chapter_fight(fight_type type, std::string text, std::vector<int> destinations, std::vector<monstre> monstres);
	int play(std::vector<crew>& crews, ship& spaceShip) override;
};