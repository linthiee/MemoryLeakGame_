#pragma once
#include <iostream>
#include <windows.h>
#include <conio.h>

struct Vector2
{
	float x;
	float y;
};

struct player
{
	char character;

	Vector2* position = new Vector2({ 0.0f, 0.0f });
	Vector2* lastPositiion = position;
};

void Move(player* player);
void gotoxy(int x, int y);
void Draw(player* player);
void Destroy(player* player);

void handleOutOfBounds(player* player, float screenHeight);