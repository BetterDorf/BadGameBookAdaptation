#include <iostream>
#include "../_Common/dice.h"
#include "../_Common/monstre.h"
#include  "book.h"

using namespace std;

int main()
{
	monstre monstre_ex = monstre(1, 2); 
	book story;
	int next_chapter = story.chapters.begin()->second.play();
	do
	{
		next_chapter = story.chapters.at(next_chapter).play();
	} while (next_chapter >= 0);
} 