#include <iostream>
#include <filesystem>
#include <map>
#include <windows.h>
#include "Cmd.h"
#include "Cls.h"
#include "Exit.h"
#include "TaskList.h"
#include "Echo.h"


int main()
{
	std:: cout << std::filesystem::current_path();
	Cmd<std::map<std::string,void >> commands = Cmd<std::map<std::string,void >>(
		{"cls",Cls::Clear()}
	);
}

	//system("tasklist");
	//system("ver");
