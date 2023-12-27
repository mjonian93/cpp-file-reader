#ifndef IFILEREADER_H
#define IFILEREADER_H

#include <fstream>
#include <iostream>

class FileReader
{
public:
    FileReader();
    ~FileReader();

    bool open(std::string filename);
    bool close();
    bool readChar(char &c);
    bool readLine(std::string &line);

private:
    std::ifstream in_file;

};

#endif