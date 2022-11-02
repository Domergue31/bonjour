#pragma once
#include <string>
#include "Path.h"

class Directory
{
#pragma region f/p
private:
	std::string path = "";
	std::string name = "";
#pragma endregion f/p
#pragma region constructor/destructor
public:
	Directory() = default;
	Directory(const std::string& _path);
	Directory(const Directory& _copy);
	~Directory();
#pragma endregion constructor/destructor
#pragma region methods
public:
	std::string Name();
	std::string Path();
#pragma endregion methods
#pragma region operator
public:
	static Directory* Create(const std::string& _path);
	static bool Exist(const std::string & _path);
	static bool Delete(const std::string& _path);
#pragma endregion operator
};

