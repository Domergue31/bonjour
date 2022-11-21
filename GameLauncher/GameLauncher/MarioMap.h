#pragma once
#include "IDrawable.h"

#define SLEEP_TIME_MAP 20

class MarioMap : public IDrawable
{
#pragma region constructor/destructor
public:
	MarioMap() = default;
	~MarioMap() override = default;
#pragma endregion constructor/destructor
#pragma region override
public:
	virtual void Draw() override;
	virtual void Erase() override;
	virtual void Update() override;
#pragma endregion override
};