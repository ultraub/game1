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
			cout << "The house appears to be very old. There is an unlit torch on the wall, a wooden chest in the corner, a door opposite a dingy bed, and a window next to the door where a soft light shines through." << endl;
			flag = 1;
		}
		else if (choice == 2) {
			cout << "You just woke up from what seemed like a very long nap. There's no reason to go back to sleep." << endl;
			flag = 0;
		}
		else {
			cout << "Please enter a valid command." << endl;
		}
	}
	
	cout << "What would you like to do next?" << endl;
	cout << "1. Grab torch" << endl << "2. Open chest" << endl << "3. Open door" << endl << "4. Look out window" << endl;
	flag = 0;
	while (flag == 0) {
		if (choice == 1) {
			cout << "You take the torch from the wall." endl;
			//Possibly say it goes in primary slot?
		}
		if (choice == 2) {
			cout << "As you approach the chest, you notice a small engraving on the side. It reminds you of a pickle." << endl;
			cout << "You slowly open the chest to discover there is nothing inside." << endl;
		}
		else if (choice == 3) {
			cout << "The door creaks as it opens, almost as if it's sorry to see you go." << endl;
			cout << "Beyond the door appears to be a large evergreen forest. It's hard to see much beyond that." << endl;
			flag = 1;
		}
		else if (choice == 4) {
			cout << "You peek outside the window. The once soft light grows harshe and brighter unntil you have to look away. Your stomach contracts and twists, almost as if it's being tied in a knot. The light dies down until you are able to look back up." << endl;
			cout << "Suddenly, you realize you are no longer in the hut, but atop what appears to be a giant pyriamid, overlooking a sprawling city. Before you have a chance to examine anything further, the world suddenly rushes away an you find yourself back in the dingy cabin, with only a stomache ache to show for your trip." << endl;
		}
		else {
			cout << "Please enter a valid command." << endl;
		}
	}
}
