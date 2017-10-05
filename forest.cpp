// This file represents all features of the forest 
#include <iostream>
#include <fstream>
#include <string>
#include "objects.hpp"

using namespace std;
int forest () {
    
    cout << "You step outside into the forest. Before you have a chance to look around, a wolf jumps from the shadows, biting at your throat." << endl;
    
    if (player.totalHealth >= 5) {
    	cout << "Congratulations on defeating that wolf! You didn't even break a sweat." << endl;
    }
    else if (player.totalHealth < 5 && player.totalHealth > 0) {
    	cout << "Congratulations on defeating that wolf! You barely survived though." << endl;
    }
	else {
		return 1;
	}
	
	cout << "Despite that sudden encounter, you spirits begin to lift as you survey the forest around you." << endl;
	cout << "What would you like to do next?" << endl;
	
	while (flag == 1) {
		cout <<
	}
    return 1; 
    
}
  
