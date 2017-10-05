// This file represents all features of the forest 
#include <iostream>
#include <fstream>
#include <string>
#include "objects.hpp"
#include "functions.hpp"

using namespace std;
int forest (Character& player) {
    
    cout << "You step outside into the forest. Before you have a chance to look around, a wolf jumps from the shadows, biting at your throat." << endl;
    NPC wolf;
	wolf.totalHealth = 5;
	wolf.damage = 1;
	wolf.charName = "Wolf";
	fightFunction(player, wolf);
	
    if (player.totalHealth >= 5) {
    	cout << "Congratulations on defeating that wolf! You didn't even break a sweat." << endl;
    }
    else if (player.totalHealth < 5 && player.totalHealth > 0) {
    	cout << "Congratulations on defeating that wolf! You barely survived though." << endl;
    }
	else {
		return 1;
	}
	
	cout << "Despite that sudden, bloody encounter, your spirits begin to lift as you survey the forest around you." << endl;
	cout << "What would you like to do?" << endl;
	cout << "1. Go to the left." << endl << "2. Go to the right" << endl << "3. Look up" << endl;
	cin >> choice;
	int flag = 0;
	int choice = 0;
	
	/*
	while (flag == 0) {
		cin >> choice;
		if (choice == 1) {
			cout << "You begin walking " << endl;
			flag = 1;
		}
		else if (choice == 2) {
			cout << "" << endl;
			flag = 1;
		}
		else {
			cout << "Please enter a valid command." << endl;
			cin >> choice;
		}
	}
	*/
    return 1; 
    
}
  
