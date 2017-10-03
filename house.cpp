//This file will represent all interactive features within the starting house

#include "functions.hpp"
#include "objects.hpp"

void house() {

	cout << "You wake to find yourself in a small, dimly lit cabin." << endl;
	cout << "What do you do?" << endl;
	cout << "1. Examine house" << endl << "2. Go back to sleep" << endl;
	
	int flag = 0;
	int choice = 0;
	cin >> choice;
	
	while (flag == 0) {
		if (choice == 1) {
			cout << "The house appears to be very old. There is an unlit torch on the wall, a chest in the corner, a door opposite a dingy bed, and a window next to the door where a soft light shines through." << endl;
			flag = 1;
		}
		else if (choice == 2) {
			cout << "You just woke up from what seemed like a very long nap. There's no reason to go back to sleep." << endl;
			flag = 1;
		}
		else {
			cout << "Please enter a valid command." << endl;
		}
	}	
}
