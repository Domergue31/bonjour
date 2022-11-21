#include "FlappBirdGame.h"
#include <string>
#include <iostream>
#include "Utils.h"
#include "Launcher.h"
#include <windows.h>
#include <conio.h>

FlappyBirdGame::FlappyBirdGame()
{
}

FlappyBirdGame::~FlappyBirdGame()
{
}

bool FlappyBirdGame::IsAlive()
{

	if (IsWallAndFloor() || IsPipe())
		return false;
	return true;
}

bool FlappyBirdGame::IsPipe()
{
	return false;
}

bool FlappyBirdGame::IsWallAndFloor()
{
	if (y <= 2 || y >= SCREEN_HEIGHT - 2)
		return true;
	return false;
}

void FlappyBirdGame::Jump()
{
	EraseBird();
	y -= 3;
	DrawBird(x, y);
}

void FlappyBirdGame::Gravity()
{
	EraseBird();
	y++;
	DrawBird(x, y);
}

void FlappyBirdGame::DrawBorder()
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
	Utils::SetCursorPosition(0, SCREEN_HEIGHT + 1);
}

void FlappyBirdGame::DrawInformation()
{
	Utils::SetCursorPosition(WIN_WIDTH + 4, 2);
	std::cout << "FLAPPY BIRD";
	for (int i = 0; i < 10; i++)
	{
		Utils::SetCursorPosition(WIN_WIDTH + 5 + i, 4);
		std::cout << "-";
		Utils::SetCursorPosition(WIN_WIDTH + 5 + i, 6);
		std::cout << "-";
	}
	Utils::SetCursorPosition(WIN_WIDTH + 6, 5);
	std::cout << "Score: " << score;
	Utils::SetCursorPosition(WIN_WIDTH + 6, 10);
	std::cout << "Control";
	Utils::SetCursorPosition(WIN_WIDTH + 6, 11);
	std::cout << "--------";
	Utils::SetCursorPosition(WIN_WIDTH + 3, 12);
	std::cout << "Spacebar = jump";
}

void FlappyBirdGame::DrawBird(const int _x, const int _y)
{
		for (int j = x; j < x + 6; j++)
		{
			Utils::SetCursorPosition(j, _y);
			std::cout << bird[0][j - 2];
		}
		for (int i = x; i < x + 6; i++)
		{
			Utils::SetCursorPosition(i, _y + 1);
			std::cout << bird[0][i + 4];
		}
	Utils::SetCursorPosition(0, SCREEN_HEIGHT + 1);
}

void FlappyBirdGame::EraseBird()
{
	for (int j = x; j < x + 6; j++)
	{
		Utils::SetCursorPosition(j, y);
		std::cout << birdNull[0][j - 2];
	}
	for (int i = x; i < x + 6; i++)
	{
		Utils::SetCursorPosition(i, y + 1);
		std::cout << birdNull[0][i + 4];
	}
}
void FlappyBirdGame::MovePipe()
{
	if (isEnd(wall1))
	{
		wall1 = WIN_WIDTH - 8;
	}
	GeneratePipe(wall1);
	wall1--;
}
void FlappyBirdGame::ErasePipe(int _index)
{

	for (int i = 1; i < SCREEN_HEIGHT; i++)
	{
		Utils::SetCursorPosition(_index + 5, i);
		std::cout << "   " << std::endl;
	}
}
void FlappyBirdGame::GeneratePipe(int _index)
{
	for (int i = 1; i < SCREEN_HEIGHT; i++)
	{
		Utils::SetCursorPosition(_index + 5, i);
		std::cout << pipe << std::endl;
	}
}

bool FlappyBirdGame::isEnd(int _wall)
{
	if (_wall <= 0)
		return true;
	return false;
}

void FlappyBirdGame::OnStart()
{
	score = 0;
	y = 6;
	x = 2;
}

void FlappyBirdGame::OnUpdate()
{
	DrawBird(x, y);
	while (IsAlive())
	{
		MovePipe();
		if (Utils::CinNoBlock() == ' ')
		{
			Jump();
		}
		Gravity();
		Sleep(100);
		ErasePipe(wall1 + 1);
	}
}

void FlappyBirdGame::OnEnd()
{
	Utils::ClearConsole();
	Utils::Pause();
}

void FlappyBirdGame::DisplayMenu()
{
	Utils::ClearConsole();
	Utils::LogTitle(GameName());
	const std::string _msg = "1- Play\n2- Instruction\n";
	char _choice = Utils::UserChoice<char>(_msg, '0', '1', '2');
	if (_choice == '2')
	{
		Utils::ClearConsole();
		Utils::LogTitle("Instruction");
		std::cout << "you just have to press <space> to make fly the bird, and try to dodge the pipe\n";
		system("pause");
		DisplayMenu();
	}
	else
	{
		Utils::ClearConsole();
		DrawBorder();
		DrawInformation();
		Utils::SetCursorPosition(0, SCREEN_HEIGHT + 1);
		Utils::Pause();
		Utils::SetCursorPosition(0, SCREEN_HEIGHT + 1);
		std::cout << "                                                      ";
	}
}

std::string FlappyBirdGame::GameName() const
{
	return "Flappy Bird";
}

std::string FlappyBirdGame::GameDescription() const
{
	return "Flappy Bird Game, you can play a bird who fly between pipe";
}
