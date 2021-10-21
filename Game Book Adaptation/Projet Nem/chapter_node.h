#pragma once
#include <string>
#include <vector>

class chapter_node
{
	//The text that is going to be shown to the player
	std::string text_;
	std::vector<int> destinations_;

public:
	chapter_node(std::string text, std::vector<int> destinations);
	void play();
}; 