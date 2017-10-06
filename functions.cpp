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
	int location;
	string name; 
	string primary;
	string secondary;
	int health;
	int damage;
    // Read from file and put in object that understands the data
	inFile >> location;
	inFile >> name;
	inFile >> primary;
	inFile >> secondary;
	inFile	>> health;
	inFile	>> damage;
	player.location = location;
	player.charname = name;
	player.primary = primary;
	player.secondary = secondary; 
	player.totalHealth = health;
	player.damage = damage;
	inFile.clear();
	inFile.seekg(0, ios::beg);
	}
		
}

void saveData (ofstream &inFile, Character& player) {
    // Writes to file with whatever is inside the object so it can be read later
	inFile << player.location << endl;
	inFile << player.charname << endl;
	inFile << player.primary << endl;
	inFile << player.secondary << endl;
	inFile << player.totalHealth << endl;
	inFile << player.damage; 
}

void setLocation (Character& player) {
	player.location = 1;
	}


int fightFunction (Character& player, NPC& enemy) {
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
				break;
			}	
		}
	}
	cout << "You now have " << player.totalHealth << " health." << endl;
}

void findNPC (ifstream &inFile, NPC& enemy, string name) {
  if (inFile.is_open()) {
	int flag = 0;
	string temp = name;
	string line;
	string charName;
	int damage;
	int totalHealth;
	int number; 
	while (flag !=1) {
		inFile >> line;
		if (line == name) {
			inFile >> charName;
			inFile >> damage;
			inFile >> totalHealth; 
			enemy.charName = charName;
			enemy.damage = damage;
			enemy.totalHealth = totalHealth;
			flag = 1;
			}
		else { 
		cout << "File couldn't be found";
		}
     //Read from file and put in object that understands the data
	}
	inFile.clear();
        inFile.seekg(0, ios::beg);
	}	
}

void readIsDead (ifstream &inFile, NPC& enemy, string name) {
	
}
#endif
