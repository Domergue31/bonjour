#pragma once
#include <string>
#include <vector>
#include <fstream>

class FileRead
{
#pragma region f/p
private:
	std::string path = "";
	std::ifstream stream = std::ifstream();
#pragma endregion f/p
#pragma region constructor/destructor
public:
	FileRead() = default;
	FileRead(const std::string& _path);
	FileRead(const FileRead& _copy);
#pragma endregion constructor/destructor
#pragma region methods
public:
	bool IsOpen() const;
	void Close();
	std::vector<std::string> GetAllLines();
#pragma endregion methods

};

