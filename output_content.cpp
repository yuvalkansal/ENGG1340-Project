#include <iostream>
#include <fstream>
#include <string>
#include "output_content.h"

using namespace std;
//function to display the contents of any file
void output_content(string level_file = "project_level.txt")
{
    string file;
    ifstream fin(level_file.c_str());
    while (getline(fin, file))
    {
        cout << file << endl;
    }
    fin.close();
}
