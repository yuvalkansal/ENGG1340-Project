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
/*this function is to let users create new accounts if the account doesnt exist already. 
It creates a file with the username and stores the weapon choice and progress as well.
*/
void sign_up()
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
    check.open("ACCOUNTS.txt", ios::app); //putting the username is the accounts database
    check << username;
    check.put(' ');
    string *temp = new string; //dynamic memory allocation
    (*temp) = username + ".txt";
    sign_up_2.open((*temp).c_str(), ios::out);
    sign_up_2 << username;
    sign_up_2.put(' ');
    //instead of the next line, push the vector
    sign_up_2.put('0'); // for current progress
    sign_up_2.put(' ');
    sign_up_2.put('0'); // for weapon choice
    sign_up_2.close();
    check.close();
    delete temp;

    vector<string> temp_vector;
    temp_vector.push_back("0");

    string temp_file = "0.txt"; // this is the beginning file
    output_content(temp_file.c_str());
    Load(temp_vector, username); // calling the load function to continue game
}