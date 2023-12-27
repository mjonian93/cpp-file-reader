#include "FileReader.h"

FileReader::FileReader()
{

}

FileReader::~FileReader()
{

}

bool FileReader::open(std::string filename)
{
    in_file.open(filename);
    return !in_file ? false : true;
}

bool FileReader::close()
{
    in_file.close();
    return !in_file ? true : false;
}


bool FileReader::readChar(char &c)
{
    return in_file.get(c) ? true : false;
}

bool FileReader::readLine(std::string &line)
{
    return std::getline(in_file, line) ? true : false;
}
