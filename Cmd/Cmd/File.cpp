#include "File.h"
#include "Path.h"
#include "FileStream.h"
#include "Directory.h"
#include <fstream>

File::File(const std::string& _path)
{
    path = _path;
}

File::File(const File& _copy)
{
    path = _copy.path;
}

bool File::Exist(const std::string& _path)
{
    std::ifstream _stream = std::ifstream(_path);
    const bool exist = _stream.good();
    _stream.close();
    return exist;

}

FileStream* File::Create(const std::string _path)
{
    const std::string _directoryPath = Path::GetDirectoryPath(_path);
    if (!Directory::Exist(_directoryPath))
        Directory::Create(_directoryPath);
    return new FileStream(_path);
}
