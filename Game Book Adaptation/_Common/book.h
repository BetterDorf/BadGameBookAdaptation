#pragma once
#include <map>
#include "chapter_node.h"
#include "chapter_fight.h"
#include "../_Common/gentil.h"
#include  "../_Common/monstre.h"
#include  "../_Common/crew.h"
#include  "../_Common/ship.h"

class book
{
	
//Holds all the chapters
public:
	book();

	std::map<int, std::unique_ptr<chapter_node>> chapters;
};