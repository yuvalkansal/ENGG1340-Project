#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "output_content.h"
#include "create_account.h"
#include "login.h"
#include "found.h"

using namespace std;

string username;

/* this is the login function for the user. If the account exists, 
 it proceeds to account info else it gievs an option to sign up with a new account 
*/

void login()
{
    int err_username = 0;
    cout << "\nWelcome to the login function\n";
    cout << "Please enter your username: ";
    getline(cin, username);
    do
    {
        if (found(username) == 1)
        {
            cout << "\nSorry, this username does not exist. However, you can create a new account.";
            cout << " You will now be redirected to the sign-up function....";
            for (long unsigned int bcd = 0; bcd < 100000000; ++bcd)
                ;
            system("clear");
            sign_up();
            return;
        }
        else if (found(username) == 0)
            err_username = 1;
    } while (!err_username);
    string temp = username + ".txt";
    fstream object(temp.c_str(), ios::in);
    string level_check;
    char get_ch;
    int get_it;
    object.seekg(0, ios::beg);
    object >> level_check;
    object >> level_check; // to get his vector form

    //copy this to a vector

    system("clear");
    cout << "Hello " << username << endl;
    cout << "Your current progress is: " << level_check << endl;
    cout << "Welcome back to the game. Continue your quest and may the odds be ever in your favour.\n";
    object.close();
    object.open(level_check.c_str(), ios::in);

    //display contents function
    output_content(level_check);
}

int main()
{
    login();

    return 0;
}