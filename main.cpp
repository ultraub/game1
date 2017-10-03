#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"

using namespace std; 

int main (int argc, char * argv []) {
  
    string inputStr;
	
    cout << "You wake up in a house" << endl; 
	cout << "What is your name?" << endl;
	// Get first options to move
	// Make object chest, inside is knife, other objects??
	getline (cin, inputStr); 
	cout << "Hello " << inputStr << endl;
	int y = 5;
	int *z = &y;
	firstFunction(z);
	cout << *z << endl;
}
