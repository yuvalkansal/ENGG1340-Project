#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include "output_content.h"
#include "create_account.h"
#include "found.h"
#include "level_loader.h"

using namespace std;

void sign_up() /*this function is to let users create new accounts if the account doesnt exist already. It creates a file with the username and stores the password as well. If thwy want to issue the book, then it redirects them to the search option */
{
    string check_arr;
    string username;
    int err_username = 0;
    fstream sign_up_2;
    fstream check;
    err_username = 0;
    cout << "\nWelcome to create a new account with us. Choose a fierce username for yourself\n";
    cout << "Please enter your username: ";
    cin >> username;
    do
    {
        if (found(username) == 0)
        {
            cout << "\nThis username already exists. Kindly enter a new one.\n";
            cin >> username;
        }
        else if (found(username) == 1)
            err_username = 1;
    } while (!err_username);
    check.open("ACCOUNTS.txt", ios::app);
    check << username;
    check.put(' ');
    string *temp = new string;
    (*temp) = username + ".txt";
    sign_up_2.open((*temp).c_str(), ios::out);
    sign_up_2 << username;
    sign_up_2.put(' ');
    //instead of the next line, push the vector
    sign_up_2.put('0');
    sign_up_2.put(' ');
    sign_up_2.put('0');
    sign_up_2.close();
    check.close();
    delete temp;
    // go to main menu
    //level_loader();
    vector<string> temp_vector;
    temp_vector.push_back("0");

    string temp_file = "0.txt";
    output_content(temp_file);
    Load(temp_vector, username);
}

/*
int main()
{
    sign_up();

    return 0;
}
*/