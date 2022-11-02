#pragma once
#include <map>

template<typename T>
class Cmd
{
#pragma region f/p
private:
	std::map<std::string, void> command = std::map<std::string, void>();
#pragma endregion f/p
#pragma region constructor/destructor
public:
	Cmd() = default;
	Cmd(const std::map<std::string, void> _map);
	Cmd(const Cmd& _copy);
#pragma endregion constructor/destructor
#pragma region methods
public:

#pragma endregion methods
};

