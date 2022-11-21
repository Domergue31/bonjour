#pragma once
#include "IDrawable.h"



/*
    
/--\_
|--|_
|__|
|  \

*/

class MarioPlayer : public IDrawable
{
#pragma region f/p
private:
	char mario[4][5] = {'/','-','-','\\','_','|','-','-','|','-','|','_','_','|',' ','|',' ',' ','\\',' '};
	int x = 6, y = 23;
	bool isDead = false;
	bool isShort = false;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	MarioPlayer() = default;
	~MarioPlayer() override = default;
#pragma region constructor/destructor
#pragma region methods
	int X();
	int Y();
	void SetX(const int _x);
	void SetY(const int _y);
	bool IsDead();
	void SetDead(const bool _isDead);
	bool IsShort();
	void SetIsShort(const bool _isShort);
	void Jump();
	void Left();
	void Rigth();
	bool IsFloor();
#pragma endregion methods
#pragma region override
public:
	virtual void Draw() override;
	virtual void Erase() override;
	virtual void Update() override;
#pragma endregion override
};

