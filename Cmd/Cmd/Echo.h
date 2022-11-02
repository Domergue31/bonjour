#pragma once
#include <string>

class Echo
{
#pragma region constructor
public:
	Echo() = default;
#pragma endregion constructor
#pragma region methods
public:
	void CommandEcho(const std::string _msg);
#pragma endregion methods
};

