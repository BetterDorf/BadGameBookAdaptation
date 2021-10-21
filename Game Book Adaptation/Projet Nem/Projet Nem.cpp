#include <iostream>
#include "../_Common/dice.h"
#include  "book.h"

using namespace std;

int main()
{
	book story;
	int next_chapter = story.chapters.begin()->second.play();
	do
	{
		next_chapter = story.chapters.at(next_chapter).play();
	} while (true);
} 