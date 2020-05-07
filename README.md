# ENGG1340-Project: Group 115

## Group Members:
1. Yuval Kansal (30356643497)
  - BEng Year 1 student
2. Abhigyan Kashyap (3035661669)
  - BEng Year 1 student
  
## Game Description:
The game we present here is an example of a strategic text-based retro adventure game, wherein the storyline focuses on the player finding/rescuing his brother from an old dilapidated castle. From solving coded cyphers to taking major gambles, the choices the user makes ultimately decide his fate, and that of his brother.

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
4. Probability of overcoming hardest obstacles is jointly dependent on the weapon the player chooses and using the random function to generate probability (e.g if you have the right weapon, your winning probability might be 75% -90% whereas if you choose the wrong weapon it would only be 50%).

## Coding Techniques Used:
1. Implementation of random generation of events: Outcomes of various levels and fights of the game rest on events like the toss of a coin, or depend on a random statistic generated by the weapon the user chooses.
2. Data structures: Data structures such as vectors shall be utilized to efficiently store game status. We have not used classes since there is no requirement for them as such in our game, as none of the user's information will be hidden from him/her.
3. Dynamic memory management: Dynamic memory management has been used in various places such as creation of temporary strings to open the required user files using usernames and these have been deleted later on to free up memory.
4. File input/output: Files shall be used to store the various levels and their branches and display them accordingly. They shall also store the game status.
5. Program codes in multiple files: The code for the program will be stored in multiple files. Header files shall be made and included according to their requirements. This shall ensure that the code is modular.

## How to Start the Game:
1. Clone and Download the files from GitHub.
2. Open Terminal/Command line on your system.
3. Go to the enclosing folder.
4. Write the following commands for running the game for the first time:
```
>make [Press Enter]
>./main [Press Enter]
```
5. To run the game later, you can just use `>./main [Press Enter]`
6. To clear up memory, you can use the command `>make clean`

## Data Structure:
Our data structures will encompass vectors and strings with data members such as:
```
string username; //to store the name of the user
vector<string> LEVEL_CODE; //to store the level the user is currently on
```

## Advanced Features:
1. The game will make use of files to display the features of the game, such as the weapons, the castle, etc.
  - Files will also be used to store the information about the user such as his username and other details.
  - Program code will be divided amongst various files. Different header files will be made and included as per the requirement of the program to ensure modularity of code.
2. Furthermore, we will employ an extensive use of ASCII art to portray many features of the castle and will also design some of the ciphers ourselves to ensure an enthralling experience for the user.

