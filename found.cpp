#include <iostream>
#include <fstream>
#include <string>
#include "found.h"

using namespace std;

int found(string username)
{
    int there = 1;
    ifstream exists("ACCOUNTS.txt");
    string name;
    while (exists >> name)
    {
        if (username == name)
            there = 0;
    }
    return there;
}
