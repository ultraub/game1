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

// Character

#endif
