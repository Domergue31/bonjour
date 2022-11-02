#include "StringUtils.h"
#include <algorithm>

void StringUtils::Replace(std::string& _str, const char& _old, const char& _newValue)
{
	std::ranges::replace(_str, _old, _newValue);
}

std::string StringUtils::StringUsercChoice(const std::string _msg)
{
	std::cout << _msg << std::endl;
	std::string _rep = "";
	std::cin >> _rep;
	return _rep;
}
