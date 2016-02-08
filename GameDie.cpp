#include <iostream>
#include <cstdlib>
#include "GameDie.h"
#include <time.h>

//class constructor that seeds the random number generator
GameDie::GameDie(short faces)
{
    if(faces > 4 && faces < 20)
    {
	n = faces;
    }
    else
    {
	n = 6;
    }
    srand(time(NULL));
}

GameDie::GameDie()
{
    n = 6;
    srand(time(NULL));
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
    int r = rand() % n + 1;
    std::cout<<r<<std::endl;
}

int main()
{
    GameDie gd = GameDie();
    gd.roll();
}
