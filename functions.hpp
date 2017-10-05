
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
extern int forest();
extern void setLocation (Character& object);

void fightFunction(Character& object, NPC& object);
//Finds the NPC within the list and sets the NPC class to those stats

void findNPC (ifstream&,NPC& object);
#endif
