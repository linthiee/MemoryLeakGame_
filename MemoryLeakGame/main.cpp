#include "player.h"
#include <iostream>
#include <conio.h>

void hideCursor();

void main()
{
	float screenWidth = 5.0f;
	float screenHeight = 5.0f;

	player* aabb = new player();
	aabb->character = '>';
	aabb->position = new Vector2{ screenWidth / 2, screenHeight / 2 };
	aabb->lastPositiion = aabb->position;

	player* aaabb = new player();
	player* aaabbbb = new player();
	player* aabbbb = new player();
	player* aabbaabbb = new player();
	player* aabbaabbbbb = new player();
	player* abaabbaabbbbb = new player();
	player* abbbabbbbb = new player();
	player* abababababbaabbbbb = new player();
	player* abbbabaabbbbb = new player();
	player* abbaababbbbb = new player();
	player* abbaabb = new player();
	player* abbaabbaabbbaaabbb = new player();
	player* abbaabbaabaabbbb = new player();
	player* abbaabbaabbaaaabbabbb = new player();
	player* abbaabbaabbbbbbbbb = new player();
	player* abbaabbaabbbbbaaaa = new player();
	player* abbaabbaabbaaaabbb = new player();
	player* abbaabbaabbbbbbb = new player();

	hideCursor();

	while (true)
	{
		Move(aabb);
		Draw(aabb);
	}

	delete aaabb;
	delete aaabbbb;
	delete aabbbb;
	delete aabbaabbb;
	delete aabbaabbbbb;
	delete abaabbaabbbbb;
	delete abababababbaabbbbb;
	delete abbbabaabbbbb;
	delete abbaabb;
	delete abbaabbaabbbaaabbb;
	delete abbaabbaabaabbbb;
	delete abbaabbaabbaaaabbabbb;
	delete abbaabbaabbbbbbbbb;
	delete abbaabbaabbbbbaaaa;
	delete abbaabbaabbbbbbb;
}

void hideCursor()
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}