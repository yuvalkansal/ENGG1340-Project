# ENGG1340-Project: Group 115

## Group Members:
1. Yuval Kansal (30356643497)
  - BEng Year 1 student
2. Abhigyan Kashyap (3035661669)
  - BEng Year 1 student
  
## Game Description:
The game we present here is an example of a strategic text-based adventure game, wherein the storyline focuses on the player finding/rescuing his brother from an old dilapidated castle. From solving coded cyphers to taking major gambles, the choices the user makes ultimately decide his fate, and that of his brother.

## The Plot:
It all started when your younger brother Sean and you decided to spend the summer break with your aunt in her quaint village. You had heard stories about the old run-down castle situated at the far end of the village, particularly the legend of the monster that had been imprisoned there. That evening, as you stared the castle from the window of your room, those thoughts re-emerged: Was it all true? Could there really be something there? Seeing your tense and nervous face, your brother cracked up and challenged you to a game of hide-and-seek at the castle. Embarrassed and determined to not come across as a wimp, you accepted it.

He’s already gone off to the castle, and now as you walk up to it, you look up at the menacing towers and realise there’s no backing out of this one. You know you don't want to wait around and see if the myth is real or not: you just want to find your brother and get out of this creepy place as soon as possible. You start walking up to the courtyard, and remembering all the other times Sean has gotten you into trouble, think: "Ah shit, here we go again…"

## Instructions:
- The game starts off with you walking up to the courtyard, which is interspersed with skulls and bones. You come across a few weapons. But here's the catch: You can only carry one of those with you. The choice is not going to be easy and what you choose will go a long way in deciding your fate in the game.
- After picking up a weapon, you get to choose between two ways that lead you to different locations in the castle. You can either go to the towers or the scary dungeons.
- After choosing a path, you must face and overcome many obstacles to locate your brother.
- Choose wisely and remember your ultimate goal **find your brother and get out of the place, pronto!**
- Best of luck navigating through this myriad of adventures, and may the odds be ever in your favour!

## Game Features:
1. The game consists of many alternate endings which depend on the decisions you make throughout the game.
2. At every corner the player's wit and wisdom is tested by cyphers and riddles, that eventually lead him to make the right choices.
3. The player's data such as his username and password are stored using dynamic memory manipulation in files.
4. Probability of overcoming hardest obstacles is jointly dependent on the weapon the player chooses and using the random function to generate probability (e.g if you have the right weapon, your winning probability might be 75% -90% whereas if you choose the wrong weapon it would only be 50%)
5. Dynamic memory will be used to store and evaluate the player's responses. If the player's responses are correct, he will proceed to make the correct decisions which will give him a leverage in the game.

## Data Structure
// describe the data structure to be used and what members will it consist of
Our data structure will encompass oa structure or a class with the following date members:
```
string username;
string password;
int weapon_choice;
```
**Kindly note that this list is not exhaustive and we will add more members (as required) to it in the development stage**


## Advanced Features:
//such as OOP and all.
1. The game will make use of files to display the features of the game, such as the weapons, the castle, etc.
  - Files will also be used to store the information about the user such as his username and other details.
  - Program code will be divided amongst various files. Different header files will be made and included as per the requirememnt of the program.
2. Furthermore, we will employ an extensive use of ASCII art to portray many features of the castle and will also design some of the ciphers ourselves to ensure an enthralling experience for the user.


Create a readme.md file there in the repo, which should contain:
1. A brief identification of the team members.
2. A game description with basic game rules.
3. A list of features / functions that you plan to implement, vis-a-vis each of the items 1 to 5 listed under coding requirements above.
4. Hand in a link to the repo to Moodle.

Encompass these features

- Generation of random game sets or events
- Data structures for storing game status
- Dynamic memory management
- File input/output (e.g., for loading/saving game status)
- Program codes in multiple files
- Proper indentation and naming styles
- In-code documentation

## Formatting in github reference link
https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax
