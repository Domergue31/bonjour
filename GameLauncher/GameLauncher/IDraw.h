#pragma once
#include "Object.h"


class IDrawwable : public Object
{
#pragma region destructor
public:
	~IDrawwable() override = default;
	#pragma region destructor

public:
	virtual void Draw() = 0;
	virtual void Erase() = 0;
	virtual void Update() = 0;

};