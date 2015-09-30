#ifndef COUNT_LINES
#define COUNT_LINES

#include <ifstream>
#include <istream>
#include <string>

int count_lines(string file_name, string s)
{
    std::ifstream file(file_name);
    int occurences;

    while(file)
    {
         occurences++;
         string current = std::getline(file);
    }

    return occurences;
}

#endif // COUNT_LINES
