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
    // Member Functions()
    void printname()
    {
       cout << "Character name is: " << charname;
    }
};

class primaryW;
{
	public:
	int damage;
	void description()
	{
		cout << "This item has mystical properties" << endl;
	}
	
};


class NPC
{
    // Access specifier
    public:

    // 
    string charName; 
    int damage;
    int totalHealth;
    // Member Functions()
    // Change this if we want them to say some dialogue
    void printname()
    {
       cout << "Character name is: " << charName;
    }
};

#endif
