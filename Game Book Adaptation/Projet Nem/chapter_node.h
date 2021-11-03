#pragma once
#include <string>
#include <vector>
#include <iostream>

class chapter_node
{
protected:
	//The text that is going to be shown to the player
	std::string text_;
	std::vector<int> destinations_;

	int get_destination(std::vector<int> valid_destis);
public:
	chapter_node(std::string text, std::vector<int> destinations);
	int virtual play();
}; 