#pragma once
#include "Object.h"
#include <vector>

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
#define MENU_WIDTH 20
#define GAP_SIZE 7
#define PIPE_DIF 45

#define SPACE 32
#define ESCAPE 27

class FlappyBirdBoard : public Object
{
#pragma region f/p
private:
	std::vector<std::string> boardFB = std::vector<std::string>();
#pragma endregion f/p
#pragma region constructor/destructor
public:
	FlappyBirdBoard();
	~FlappyBirdBoard() override;

#pragma endregion constructor/destructor
#pragma region methods
public:
	void DrawBorder();
#pragma endregion methods
};

