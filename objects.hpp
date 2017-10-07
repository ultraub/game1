// objects like characters

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#ifndef OBJECTS_HPP
#define OBJECTS_HPP

class Character
{
    // Access specifier
    public:

    // 
    int location;
    string charname;
    string primary;
    string secondary;
    int totalHealth;
    int damage;
    int houseProgress;
    int forestProgress;
    int beachProgress;
    int graveyardProgress;
	int ruins;
    // Member Functions()
    void printname()
    {
       cout << "Character name is: " << charname;
    }
};

class primary
{
	public:
	string name; 
	int damage;
	int equipped;
	int found;
	//class Weapon {
	//	public: 
	//	int damage;
	//	void description()
	//		{
	//		cout << "This item has mystical properties" << endl;
	//		}
	//};
	//Weapon name;
};


class NPC
{
    // Access specifier
    public:

    // 
    string charName; 
    int damage;
    int totalHealth;
    int isDead;
    // Member Functions()
    // Change this if we want them to say some dialogue
    void printname()
    {
       cout << "Character name is: " << charName;
    }
};

#endif
