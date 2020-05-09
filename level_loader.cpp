#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <time.h>
#include "level_loader.h"

using namespace std;

vector<string> LEVEL_CODE;
char WEAPON = '0';
// function to the get the weapon of the player is he/she is an existing user
char getWeapon(string temp)
{
    string file, temp2;
    temp2 = temp + ".txt";
    ifstream get_weapon(temp2.c_str());
    get_weapon >> file;
    get_weapon >> file;
    get_weapon >> file;
    get_weapon.close();
    return file[0];
}
// function to display the contents of a particular file
void Display(string st)
{
    string file;
    st += ".txt";
    ifstream fin(st.c_str());
    system("clear");
    while (getline(fin, file))
    {
        cout << file << endl;
    }
    fin.close();
}

/*function to load various levels of the game
based on the user's current progress
*/
void Load(vector<string> temp, string username)
{
    if (WEAPON != 'S' && WEAPON != 'P')
    {
        WEAPON = getWeapon(username);
        //cout << WEAPON << endl;
    }
    LEVEL_CODE = temp;
    //cout << WEAPON << endl;
    //inputting input
    string input;
    cin >> input;

    //extracting current level
    string current_level;
    for (int i = 0; i < LEVEL_CODE.size(); i++)
        current_level = current_level + LEVEL_CODE[i];

    //checking validity of input
    bool flag = 0;
    while (flag != true)
    {

        //Help
        if (input == "H" || input == "h")
        {
            Display("Help");
            string c;
            cin >> c;
            while (c != "B" && c != "b")
            {
                cout << "Enter a valid move." << endl;
                cin >> c;
            }
            input = "";
            flag = true;
            break;
        }

        //Save and Exit
        else if (input == "X" || input == "x")
        {
            // <<FILL IN FILE INPUT STUFF>>
            string temp_username = username + ".txt";
            ofstream push_progress(temp_username.c_str());
            push_progress << username;
            push_progress.put(' ');
            push_progress << current_level;
            push_progress.put(' ');
            if (WEAPON == 'S' || WEAPON == 'P')
                push_progress << WEAPON;
            else
                push_progress.put('0');
            push_progress.close();
            cout << "\nYour progress has been saved! Hope to see you soon. Goodbye";
            exit(0);
        }

        //Weapon
        if (current_level == "01")
        {
            if (input == "1")
            {
                WEAPON = 'S';
                input = "W";
                flag = true;
                break;
            }
            else if (input == "2")
            {
                WEAPON = 'P';
                input = "W";
                flag = true;
                break;
            }
        }

        //Single Choice Single Path
        if (current_level == "0" || current_level == "WS" || current_level == "WP1")
        {
            if (input == "1")
            {
                flag = true;
                break;
            }
        }

        //Go to Monster
        if (current_level == "01W2122" || current_level == "01W2222")
        {
            if (input == "1")
            {
                LEVEL_CODE.clear();
                LEVEL_CODE.push_back("W");
                Display("W");
                Load(LEVEL_CODE, username);
            }
        }

        //Single Choice Double Path[Weapon Choice]
        if (current_level == "01W211" || current_level == "W")
        {
            if (input == "1")
            {
                if (WEAPON == 'S')
                    input = "S";
                else
                    input = "P";
                flag = true;
                break;
            }
        }

        //Single Choice Double Path[Probability]
        if (current_level == "01W211P" || current_level == "01W2221" || current_level == "WP")
        {
            if (input == "1")
            {
                srand((unsigned)time(NULL));
                double r = rand() % 2;
                if (r == 0)
                    input = "0";
                else
                    input = "1";
                flag = true;
                break;
            }
        }

        //Double Choice Double Path
        if (current_level == "01W" || current_level == "01W2" || current_level == "01W21" || current_level == "01W22" || current_level == "01W222")
        {
            if (input == "1" || input == "2")
            {
                flag = true;
                break;
            }
        }

        //Double Choice Double Path[Riddle]
        if (current_level == "WS1" || current_level == "WP11")
        {
            if (input == "DOOR")
                input = "1";
            else
                input = "0";
            flag = true;
            break;
        }

        //Triple Choice Triple Path
        if (current_level == "01W212")
        {
            if (input == "1" || input == "2" || input == "3")
            {
                flag = true;
                break;
            }
        }

        //No Path
        if (current_level == "01W1" || current_level == "01W211S" || current_level == "01W211P0" || current_level == "01W211P1" || current_level == "01W2121" || current_level == "01W2123" || current_level == "01W2121" || current_level == "01W221" || current_level == "01W22210" || current_level == "01W22211" || current_level == "WS10" || current_level == "WS11" || current_level == "WP0" || current_level == "WP110" || current_level == "WP111")
        {
            if (input == "R")
            {
                LEVEL_CODE.clear();
                LEVEL_CODE.push_back("0");
                Display("0");
                Load(LEVEL_CODE, username);
            }
            if (input == "X")
            {
                exit(0);
            }
        }

        //If None Satisfied
        cout << "Wrong input. Please input correctly." << endl;
        cin >> input;
    }

    if (input != "H" && input != "h" && input != "X" && input != "x")
    {
        LEVEL_CODE.push_back(input);
        current_level = current_level + input;
    }
    //cout << current_level << endl;
    Display(current_level);     // to display the level
    Load(LEVEL_CODE, username); // recursive call
}
