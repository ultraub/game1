#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"
#include "objects.hpp"
using namespace std; 

int main (int argc, char * argv []) {
    int game = 0, location =1;
    Character player;
    player.totalHealth = 10;
    player.printname(); 
    // Loop while game has not ended
    while (game!=1) {
        switch (location) {
            case 1: 
                house();
                break;
            case 2: 
                //forest();
                break;
            default:
                game =1;
        }
    }
  }
