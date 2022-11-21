#include "FlappyBirdBoard.h"
#include "Utils.h"
#include <windows.h>

FlappyBirdBoard::FlappyBirdBoard()
{
}

FlappyBirdBoard::~FlappyBirdBoard()
{
}

void FlappyBirdBoard::DrawBorder()
{
	for (int i = 0; i < SCREEN_WIDTH; i++)
	{
		Utils::SetCursorPosition(i, 0);
		std::cout << "±";
		Utils::SetCursorPosition(i, SCREEN_HEIGHT);
		std::cout << "±";
	}

	for (int i = 0; i < SCREEN_HEIGHT; i++)
	{
		Utils::SetCursorPosition(0, i);
		std::cout << "±";
		Utils::SetCursorPosition(SCREEN_WIDTH, i);
		std::cout << "±";
	}

	for (int i = 0; i < SCREEN_HEIGHT; i++)
	{
		Utils::SetCursorPosition(WIN_WIDTH, i);
		std::cout << "±";
	}
	Utils::Pause();
}
