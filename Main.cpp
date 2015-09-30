#include "CountLines.h"

#include <iostream>



int main()
{
    std::string test_file_name = "testFile.txt";
    std::string test_delimiter = "a";

    int occurances = count_lines(test_file_name, test_delimiter);

    std::cout << occurances << std::endl;
}
