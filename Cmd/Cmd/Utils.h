#pragma once
#include <iostream>
#include <windows.h>
#include <string>

#define color_white 15
#define color_red 4

class Utils
{
#pragma region Log
public:
	static void Log(const std::string& _msg);
	static void LogError(const std::string& _msg);
#pragma endregion Log
#pragma region Utils
public:
	static void Clear();
	static std::string Separator(const int _count, const char _c);
	template<typename T>
	static T UserChoice(const std::string& _msg = "");
#pragma endregion Utils
};

template<typename T>
T Utils::UserChoice(const std::string& _msg)
{
	std::cout << _msg << std::endl;
	T _rep = nullptr;
	std::cin >> _rep;
	return _rep;
}
