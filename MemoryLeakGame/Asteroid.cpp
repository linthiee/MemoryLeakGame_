#include <iostream>
#include "Asteroid.h"

using namespace std;

Asteroid CreateAsteroid(Asteroid& asteroid, float width, float height)
{
	SetSpawn(asteroid.spawnPos, width, height);

	return asteroid;
}

void UpdateAsteroid(Asteroid& asteroid)
{
    asteroid.pos.posY += 1;

}

void DrawAsteroid(Asteroid asteroid)
{
    gotoxy(asteroid.pos.posX, asteroid.pos.posY);
    cout << "0" << endl;
}

void SetSpawn(Vector2 asteroidPos, int width, float height)
{
    srand( time(nullptr));
    
    asteroidPos.posX = (std::rand() % width) + 0;
    asteroidPos.posY = 0.0f;
}

void gotoxy(int x, int y) {
    
    COORD coord;
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}