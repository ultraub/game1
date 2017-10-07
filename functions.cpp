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
	int houseProgress;
    int forestProgress;
    int beachProgress;
    int graveyardProgress;
    // Read from file and put in object that understands the data
	inFile >> location;
	inFile >> name;
	inFile >> primary;
	inFile >> secondary;
	inFile	>> health;
	inFile	>> damage;
	inFile >> houseProgress;
	inFile >> forestProgress;
	inFile >> beachProgress;
	inFile >> graveyardProgress;
	player.location = location;
	player.charname = name;
	player.primary = primary;
	player.secondary = secondary; 
	player.totalHealth = health;
	player.damage = damage;
	player.houseProgress = houseProgress;
	player.forestProgress = forestProgress;
	player.beachProgress = beachProgress;
	player.graveyardProgress = graveyardProgress;
	inFile.clear();
	inFile.seekg(0, ios::beg);
	}
		
}
void readInventory (fstream &inFile, primary weaponArr[]) {
	string line;
	int value, i=0;
	while (!inFile.eof()) {
        inFile >> line;
        weaponArr[i].name = line;
		inFile >> value;
		weaponArr[i].damage = value;
		inFile >> value; 
		weaponArr[i].equipped = value;
		inFile >> value;
		weaponArr[i].found = value;
                i++;
                }
	inFile.clear();
        inFile.seekg(0, ios::beg);
}
void writeInventory (fstream &inFile, primary weaponArr[], int count)  {
	int i=0;
	while (i<count) {
		inFile << weaponArr[i].name << endl;
		inFile << weaponArr[i].damage << endl;
		inFile << weaponArr[i].equipped << endl;
		inFile << weaponArr[i].found << endl;
		i++;
	}
}
void readArmor(fstream &inFile, armor armorArr[]) {
	string line;
	int value, i = 0;
	while (!inFile.eof()) {
		inFile >> line;
		armorArr[i].name = line;
		inFile >> value;
		armorArr[i].bonusHealth = value;
		inFile >> value;
		armorArr[i].equipped = value;
		inFile >> value;
		armorArr[i].found = value;
		i++;
	}
	inFile.clear();
	inFile.seekg(0, ios::beg);
}
void writeArmor(fstream &inFile, armor armorArr[], int count) {
	int i = 0;
	while (i < count) {
		inFile << armorArr[i].name << endl;
		inFile << armorArr[i].bonusHealth << endl;
		inFile << armorArr[i].equipped << endl;
		inFile << armorArr[i].found << endl;
		i++;
	}
}
void saveData (ofstream &inFile, Character& player) {
    // Writes to file with whatever is inside the object so it can be read later
	inFile << player.location << endl;
	inFile << player.charname << endl;
	inFile << player.primary << endl;
	inFile << player.secondary << endl;
	inFile << player.totalHealth << endl;
	inFile << player.damage << endl;
	inFile << player.houseProgress << endl;
	inFile << player.forestProgress << endl;
	inFile << player.beachProgress << endl;
	inFile << player.graveyardProgress;
}

void setLocation (Character& player) {
	player.location = 1;
	}


int fightFunction (Character& player, NPC& enemy) {
	cout << "Your opponent has " << enemy.totalHealth << " health." << endl;
	cout << "You have " << player.totalHealth << " health." << endl;
	while (enemy.totalHealth > 0) {
		cout << "You attack with " << player.primary << " for " << player.damage << " damage." << endl;
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

void readIsDead (fstream &inFile, int* npcArray) {
	int i=0;
	int line = 0;
	while (!inFile.eof()) {
		inFile >> line;
		npcArray[i] = line;
		i++;		
		}
     //Read from file and put in object that understands the data
	inFile.clear();
        inFile.seekg(0, ios::beg);
}

void setIsDead (fstream &inFile, int* npcArray, int count) {
	int i=0; 
	for (i=0; i<count; i++) {
		inFile << npcArray[i] << endl;
	}
}

void findEquipped (primary weaponArr[],Character& player, int count) {
	for (int i=0; i<count; i++) {
		if(weaponArr[i].equipped == 1) {
			player.damage = weaponArr[i].damage;
			player.primary = weaponArr[i].name;
			}
	}
}
					
#endif
