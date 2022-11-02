#pragma once
#include <iostream>
#include <string>

class StringUtils
{
#pragma region StringUtils
public:
	static void Replace(std::string& _str, const char& _old, const char& _newValue);
	static std::string StringUsercChoice(const std::string _msg);
#pragma endregion StringUtils
};

