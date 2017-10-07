#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "objects.hpp"
#include "functions.hpp"
#include "character.hpp"
using namespace std; 

int main (int argc, char * argv []) {

//Update array size as weapons increase in number
primary weapon[3];
fstream weaponFile;
weaponFile.open("primaryWeapons.txt");
readInventory (weaponFile,weapon);

// Update the third parameter as we add more weapons
//writeInventory(weaponFile,weapon,3);

	Character player;
	ifstream inFile;
	ofstream outFile;
	inFile.open("save.txt");
	readData(inFile, player);

//Finds weapon equipped and sets player damage to that

findEquipped (weapon, player, 3);

cout << player.damage << " " << player.primary << endl;

    int game = 0; 
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
weaponFile.close();
  }
