#pragma once
#include "chapter_node.h"
#include "../_Common/monstre.h"

enum fight_type
{
	hand = 0,
	laser = 1,
	ship = 2
};

class chapter_fight : public chapter_node
{
private:
	fight_type type_ = ship;
	std::vector<monstre> monstres_;
public:
	chapter_fight(std::string text, std::vector<int> destinations, fight_type type, std::vector<monstre> monstres);
	int play() override;
};