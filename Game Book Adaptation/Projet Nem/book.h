#pragma once
#include <map>
#include "chapter_node.h"
#include "../_Common/"

class book
{
//Holds all the chapters
public:
	std::map<int, chapter_node> chapters{ 
		{0, chapter_node("0 is the place you are at", {200})},
		{1, chapter_node("you are dead...", {-1})},
		{200, chapter_node("You are at 200", {100, 200})},
		{100, chapter_node("This is 100", {1, 150})},
		{150, chapter_node("And here, you are at 150", {200, 100})}
	};
};