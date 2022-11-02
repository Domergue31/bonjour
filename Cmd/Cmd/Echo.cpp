#include "Echo.h"
#include <string>
#include <iostream>

void Echo::CommandEcho(const std::string _msg)
{
	std::cout << _msg << std::endl;
}
