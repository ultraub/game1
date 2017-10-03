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
    string charname = "faggot";
    string primary;
    string secondary;
	int totalHealth = 10;
	int 
    // Member Functions()
    void printname()
    {
       cout << "Character name is: " << charname;
    }
};


#endif
