#pragma once
#include "chapter_node.h"

class chapter_fight : public chapter_node
{
public:
	chapter_fight(); //TODO parameters
	int play() override;
};