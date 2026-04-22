#include "player.h"

void Move(player* player)
{
	if (_kbhit())
	{
		int key = _getch();

		switch (tolower(key))
		{
		case 'w':

			player->lastPositiion = player->position;
			player->position = new Vector2{ player->position->x, player->position->y - 1};

			break;
		case 's':

			player->lastPositiion = player->position;
			player->position = new Vector2{ player->position->x, player->position->y + 1 };

			break;
		default:
			break;
		}
	}	

	handleOutOfBounds(player, 5.0f);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Draw(player* player)
{
	gotoxy(player->position->x, player->position->y);
	std::cout << player->character;

	gotoxy(player->lastPositiion->x, player->lastPositiion->y);
	std::cout << ' ';
}

void Destroy(player* player)
{
	delete player->position;
	delete player;
}

void handleOutOfBounds(player* player, float screenHeight)
{
	if (player->position->y > screenHeight)
	{
		player->position->y -= 1;
	}
	if (player->position->y < 1.0f)
	{
		player->position->y += 1;
	}
}