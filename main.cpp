#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "objects.hpp"
#include "functions.hpp"
#include "character.hpp"
using namespace std; 
primary weapon[0];
damage.weapon[0] = 2;
cout << damage.weapon[0]; << endl;

int main (int argc, char * argv []) {
	Character player;
	ifstream inFile;
	ofstream outFile;
	inFile.open("save.txt");
	readData(inFile, player);
	//inFile.close();
	cout << player.location << endl << endl;
	//player.charname = "bob";
    //use struct to save all user data
    //when the user reaches a new location, player.location to the new value
    //print all values to an output file
    //when the game starts, read the output file and store that in the character class
    //if the character class is null, then its a new game
    //else when it enters the loop it should jump to that location with all of the users items and stats
    int game = 0; 
    cout << endl;
    // Loop while game has not ended
    while (game!=1) {
        switch (player.location) {
            case 1: 
                player.location = house();
                break;
            case 2: 
                player.location = forest(player);
                break;
            default:
                game =1;
        }
	outFile.open("save.txt");
	saveData (outFile, player);
	outFile.close();
    }
inFile.close();
  }
