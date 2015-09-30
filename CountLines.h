#ifndef COUNT_LINES
#define COUNT_LINES

#include <fstream>
#include <istream>
#include <string>

int count_lines(std::string file_name, std::string s)
{
    std::ifstream file(file_name);
    int occurences = 0;

    while(file)
    {
         occurences++;
         std::string current{};
         std::getline(file, current);
    }

    return occurences;
}

#endif // COUNT_LINES
