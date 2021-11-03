#pragma once
#include <map>
#include "chapter_node.h";

class book
{
//Holds all the chapters
public:
	std::map<int, chapter_node> chapters{
		{1, chapter_node("1 is the place you are at", {200})},
		{200, chapter_node("You are at 200", {100, 200})},
		{100, chapter_node("This is 100", {1, 150})},
		{150, chapter_node("And here, you are at 150", {200, 100})}
	};
};