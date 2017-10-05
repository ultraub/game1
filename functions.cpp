#ifndef FUNCTIONS_CPP
#define FUNCTIONS_CPP
#include <iostream>
#include <fstream>
#include <string>
#include "objects.hpp"
#include "functions.hpp"
using namespace std;
void readData (ifstream &inFile, Character& player) {
  if (inFile.is_open()) {
	string line;
	int number;
    // Read from file and put in object that understands the data
	inFile >> number;
	player.location = number;
	getline(inFile, line);
	player.charname = line;
	getline(inFile, line);
	player.primary = line;
	getline(inFile, line);
	player.secondary = line;
	inFile >> number;
	player.totalHealth = number;
	}
		
}

void saveData (ofstream &inFile, Character& player) {
    // Writes to file with whatever is inside the object so it can be read later
	inFile << player.location << endl;
	inFile << player.charname << endl;
	inFile << player.primary << endl;
	inFile << player.secondary << endl;
	inFile << player.totalHealth << endl;
}

void setLocation (Character& player) {
	player.location = 1;
	}


int fightFunction (Character& player, npc& enemy) {
	while (enemy.Health > 0) {
		cout << "You have " << player.totalHealth << " health." << endl;
		cout << "Your opponent has " << enemy.totalHealth << " health." << endl;
		cout << "You attack with " << player.primary << " damage." << endl;
		enemy.totalHealth = enemy.totalHealth - primaryW.Damage;
		cout << "Your opponent now has " << enemy.totalHealth << " health." << endl;
		
		cout << "Your opponent attacks you for " << npc.Damage << " damage." << endl;
		player.totalHealth = player.totalHealth - enemy.Damage;
		if (player.totalHealth < 0) {
			cout << "You have failed to defeat " << enemy.Name << " and paid the ultimate price." << endl;
		//	Somehow tp player back to house
		//	return something
		}
		cout << "You now have " << player.totalHealth << " health." << endl;
	}
}

#endif
