#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"
#include "objects.hpp"
using namespace std; 

int main (int argc, char * argv []) {
    //use struct to save all user data
    //when the user reaches a new location, player.location to the new value
    //print all values to an output file
    //when the game starts, read the output file and store that in the character class
    //if the character class is null, then its a new game
    //else when it enters the loop it should jump to that location with all of the users items and stats
    int game = 0; 
 //   Character player;
 //   player.location =1;
  //  player.charname = "faggot";
  //  player.totalHealth = 10;
 //   player.printname();
    cout << endl;
    // Loop while game has not ended
    while (game!=1) {
        switch (player.location) {
            case 1: 
                player.location = house();
                break;
            case 2: 
                player.location = forest();
                break;
            default:
                game =1;
        }
    }
  }
