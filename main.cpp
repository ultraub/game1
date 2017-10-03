#include <iostream>
#include <fstream>
#include "functions.hpp"

using namespace std; 

int main (int argc, char * argv []) {
  
    cout << "Hello World!" << endl;
    cout << "I'm gay!" << endl; 
	int y = 5;
	int *z = &y;
	firstFunction(z);
	cout << *z << endl;
}
