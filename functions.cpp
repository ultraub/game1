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


int fightFunction (Character& player, NPC& enemy) {
	player.totalHealth = 10;
	cout << "Your opponent has " << enemy.totalHealth << " health." << endl;
	cout << "You have " << player.totalHealth << " health." << endl;
	while (enemy.totalHealth > 0) {
		cout << "You attack with " << player.damage << " damage." << endl;
		enemy.totalHealth = enemy.totalHealth - player.damage;
		cout << "Your opponent now has " << enemy.totalHealth << " health." << endl;
		if (enemy.totalHealth > 0) {
			cout << "Your opponent attacks you for " << enemy.damage << " damage." << endl;
			player.totalHealth = player.totalHealth - enemy.damage;
			cout << "You have " << player.totalHealth << " health." << endl;
			if (player.totalHealth <= 0) {
				cout << "You have failed to defeat " << enemy.charName << " and paid the ultimate price." << endl;
			//	Somehow tp player back to house
			}	
		}
	}
	cout << "You now have " << player.totalHealth << " health." << endl;
}

//void findNPC (ifstream &inFile, NPC& enemy, string name) {
//  if (inFile.is_open()) {
//	int flag = 0;
//	string temp = name;
//	string line;
//	int number; 
//	while (flag !=1) {
//		getline(inFile, line);
//		if (line == name) {
//			
    // Read from file and put in object that understands the data
//		}
//		
//}

#endif
