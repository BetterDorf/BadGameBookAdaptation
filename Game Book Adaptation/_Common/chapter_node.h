#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "../_Common/crew.h"
#include "../_Common/ship.h"

class chapter_node
{
protected:
	//The text that is going to be shown to the player
	std::string text_;
	std::vector<int> destinations_;

	int get_destination(std::vector<int> valid_destis);
public:
	chapter_node(std::string text, std::vector<int> destinations);
	int virtual play(std::vector<crew>& crews, ship& spaceShip);
}; 