
//AIDS

#include <iostream>
#include <fstream>
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include "objects.hpp"
using namespace std;

void firstFunction (int*);
//Reads file that may exist for saving data 
extern void readData(ifstream&,Character& object);
//Writes to file to save game data
extern void saveData(ofstream&, Character& object);
void printNumber(int);
extern int house();
extern int forest(Character& object);
extern int beach(Character& object);
extern void setLocation (Character& object);

int fightFunction(Character& object, NPC& object1);
//Finds the NPC within the list and sets the NPC class to those stats

void findNPC (ifstream&,NPC& object, string name);
void setIsDead (fstream &inFile, int* npcArray, int count);
void readIsDead (fstream &inFile, int* npcArray);
void readInventory (fstream &inFile, primary weaponArr[]);
void writeInventory (fstream &inFile, primary weaponArr[], int count);
void findEquipped (primary weaponArr[],Character& player, int count);

#endif
