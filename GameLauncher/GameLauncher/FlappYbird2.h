#pragma once
#include "IGame.h"
#include "FappyMap.h"

#pragma warning(disable: 4996)

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70
#define MENU_WITDTH 20
#define GAP_SIZE 7
#define PIPE_DIF 45
#define SPACE 32
#define ESCAPE 27

class FlappyMap;

class FlappYbird2 :public IGame
{
private:
	FlappyMap* map = nullptr;

public:
	FlappYbird2();
	~FlappYbird2();

public:
	void Draw();
	virtual void OnStart() override;
	virtual void OnUpdate() override;
	void PlayerTurn(const bool& _isPlayerTwo, int& _currentMove, int& _moves);
	virtual void OnEnd() override;
	virtual void DisplayMenu() override;
	virtual std::string GameName() const override;
	virtual std::string GameDescription() const override;
};

