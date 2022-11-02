#include "FileRead.h"

FileRead::FileRead(const std::string& _path)
{
    path = _path;
    stream = std::ifstream(_path);
}

FileRead::FileRead(const FileRead& _copy)
{
    path = _copy.path;
    stream = std::ifstream(_copy.path);
}

bool FileRead::IsOpen() const
{
    return stream.is_open();
}

void FileRead::Close()
{
    if (!IsOpen()) return;
    stream.close();
}

std::vector<std::string> FileRead::GetAllLines()
{
    std::vector<std::string> _result = std::vector<std::string>();
    std::string _str = "";
    while (std::getline(stream, _str))
    {
        _result.push_back(_str);
    }
    return _result;
}
