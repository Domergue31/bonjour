#pragma once
#include "IGame.h"
#include <conio.h>

#pragma warning(disable: 4996)

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
#define MENU_WIDTH 20
#define GAP_SIZE 7
#define PIPE_DIF 45

#define SPACE 32
#define ESCAPE 27

class FlappyBirdGame : public IGame
{
#pragma region f/p
private:
	char birdNull[2][6] = { ' ',' ',' ',' ',' ',' ',
					' ',' ',' ',' ',' ',' ' };
	char bird[2][6] = { '/','-','-','o','\\',' ',
					'|','_','_','_',' ','>' };
	int score = 0;
	int y = 6, x = 2;
	int wall1 = WIN_WIDTH - 8;
	int wall2 = WIN_WIDTH - 8;
	std::string pipe = "***";
#pragma endregion f/p

#pragma region constructor/destructor
public:
	FlappyBirdGame();
	~FlappyBirdGame() override;
#pragma endregion constructor/destructor

#pragma region methods
public:
	bool IsAlive();
	bool IsPipe();
	bool IsWallAndFloor();
	void Jump();
	void Gravity();
	void DrawBorder();
	void DrawInformation();
	void DrawBird(const int _x, const int _y);
	void EraseBird();
	void MovePipe();
	void ErasePipe(int _index);
	void GeneratePipe(int _index);
	bool isEnd(int _wall);
	virtual void OnStart() override;
	virtual void OnUpdate() override;
	virtual void OnEnd() override;
	virtual void DisplayMenu() override;
	virtual std::string GameName() const override;
	virtual std::string GameDescription() const override;
#pragma endregion methods
};

