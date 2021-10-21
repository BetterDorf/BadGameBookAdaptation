#include <iostream>
#include "dice.h"

using namespace std;

int main()
{
    dices dice;
    for (int i = 0; i < 100; i++)
    {
        cout << dice.exploding_dice() << endl;
    }
} 