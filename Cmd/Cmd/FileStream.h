#pragma once
#include <string>

class FileWriter;
class FileRead;

class FileStream
{
#pragma region f/p
private:
	FileWriter* writer = nullptr;
	FileRead* reader = nullptr;
#pragma endregion f/p
#pragma region constructor/destructor
public:
	FileStream() = default;
	FileStream(const std::string& _path);
	FileStream(const FileStream& _copy);
#pragma endregion constructor/destructor
#pragma region methods
public:
	void Close() const;
	FileWriter* Writer() const;
	FileRead* Reader() const;
	bool IsValid() const;
#pragma endregion methods
};

