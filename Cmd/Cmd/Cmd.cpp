#include <iostream>
#include <filesystem>
#include <windows.h>
#include "Cmd.h"


int main()
{
	std:: cout << std::filesystem::current_path();
	exit(99);
}

	//system("tasklist");
	//system("ver");
