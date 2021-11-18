#include "book.h"

book::book()
{
	std::vector<monstre> mobs{ monstre(35, 2) };

	chapters.insert(std::make_pair(0, std::make_unique<chapter_node>("0 is the place you are at", std::vector<int>{200})));
	chapters.insert(std::make_pair(1, std::make_unique<chapter_node>("you are dead...", std::vector<int>{-1})));
	chapters.insert(std::make_pair(2, std::make_unique<chapter_node>("Your ship exploded", std::vector<int>{-1})));

	chapters.insert(std::make_pair(200, std::make_unique<chapter_fight>(ship_fight, "You are at 200", std::vector<int>{0, 1},
		std::vector<monstre>(mobs))));
}
