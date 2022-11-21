#pragma once
#include "IGame.h"

#define SCREEN_WIDTH 90
#define SCREEN_HEIGHT 26
#define WIN_WIDTH 70

class MarioMap;
class MarioPlayer;

class Mario : public IGame
{
#pragma region f/p
private:
	MarioMap* map = nullptr;
	MarioPlayer* player = nullptr;
	bool isQuiting = false;
#pragma endregion f/p
#pragma region constructor
public:
	Mario();
	~Mario() override;
#pragma endregion constructor
#pragma region methods
public:
	void Draw() const;
	void Clear() const;
	void Init();
#pragma endregion methods
#pragma region operator
	virtual void OnStart() override;
	virtual void OnUpdate() override;
	virtual void OnEnd() override;
	virtual void DisplayMenu() override;
	virtual std::string GameName() const override;
	virtual std::string GameDescription() const override;
#pragma endregion operator
};

