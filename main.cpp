#include <iostream>
#include "create_account.h"
#include "login.h"
#include "output_content.h"

using namespace std;

int main() //main function. Game starts here
{
    output_content("main.txt"); // to display the beginning
    cout << "Welcome to our game THE CASTLE. You will have an enthrilling experience\nhenceforth!!! ";
    cout << "May the odds be ever in your favour.\nAre you an existing user or are you a new person looking for a great experience?\n";
    cout << "Press 1 if you are an existing user and 2 if you are new: ";
    int choice;
    bool flag = true;
    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            login();
        case 2:
            sign_up();
        default:
            cout << "Please enter a valid choice\n";
            flag = false;
        }
    } while (flag == false);
    return 0;
}