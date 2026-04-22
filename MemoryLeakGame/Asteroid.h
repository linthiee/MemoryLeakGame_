#pragma once
#include <iostream>

#include <Windows.h>

using namespace std;

struct Vector2
{
	float posX;
	float posY;
};

struct Asteroid
{
	Vector2 pos;
	Vector2 spawnPos;
	char asteroid;
	bool lider;
};

Asteroid CreateAsteroid(Asteroid& asteroid, float width, float height);

void SetSpawn(Vector2 asteroidPos, int width, float height);
void UpdateAsteroid(Asteroid& asteroid);
void DrawAsteroid(Asteroid asteroid);
void gotoxy(int x, int y);
//void GetPreviousAsteroidPos();