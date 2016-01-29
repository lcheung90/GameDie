#include <iostream>
#include <cstdlib>
#include "GameDie.h"
#include <time.h>

//class constructor that seeds the random number generator
GameDie::GameDie()
{
    srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
}

