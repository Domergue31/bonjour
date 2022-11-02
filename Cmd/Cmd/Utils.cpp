#include "Utils.h"
#include <windows.h>

#pragma region Log
void Utils::Log(const std::string& _msg)
{
	std::cout << _msg << std::endl;
}

void Utils::LogError(const std::string& _msg)
{
	const HANDLE _handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(_handle, color_red);
	std::cout << "[Error] => " << _msg << std::endl;
	SetConsoleTextAttribute(_handle, color_white);
}
#pragma endregion Log

#pragma region Utils
void Utils::Clear()
{
	system("cls");
}

std::string Utils::Separator(const int _count, const char _c)
{
	return std::string(_count, _c);
}
#pragma endregion Utils
