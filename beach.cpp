// This file represents all features of the beach 
#include <iostream>
#include <fstream>
#include <string>
#include "objects.hpp"
#include "functions.hpp"

using namespace std;
int beach (Character& player) {
    int npcArray[4];
	int flag = 0;
	int choice;
	string response; 
    fstream beachNPC;
    // Reads what monsters are dead
    beachNPC.open("beachNPC.txt");
    readIsDead (beachNPC, npcArray);
    NPC shadow;	
	// Make sure this goes away if progress reaches beyond it
	cout << "You walk along the beach, feeling smooth pebbles press into your feet as you move toward the water." << endl;
	cout << "You notice a man sitting on a fallen tree. His body looks disfigured but it's too dark to make anything out clearly." << endl;
	
	cout << "Do you want to approach the man?" << endl;
	while (flag !=1) {
		cin >> response;
		if (response == "yes") {
			flag = 1;
			choice = 1;
		}
		else if (response == "no") {
			flag = 1;
			choice = 0;
		}
		else {
			cout << "Please enter 'yes' or 'no'." << endl;
		}
	}
	
	ifstream npcFile;
	npcFile.open("npcList.txt");
	findNPC(npcFile, shadow, "shadow");
	if (choice == 1) {
		//Description of encounter
		cout << "You approach the man, calling out to alert him that you are approaching." << endl;
		cout << "The man turns slowly -- standing to reveal that he is holding a knife." << endl;
		cout << "He lunges at you, and you push him to the ground. Clearly this man is not friendly." << endl;
		if (npcArray[0] == 0) {		
			fightFunction(player, shadow);
    			if (player.totalHealth >= 5) {
    				cout << "You watch the man grow faint and lose what life is left inside him, he begins to fade away" << endl;
					cout << "as if he never had existed at all." << endl;
					npcArray[0]=1;
					choice = 0;
    				}
    			else if (player.totalHealth < 5 && player.totalHealth > 0) {
    				cout << "The man falls to the ground, black spirals spreading about the pebbles and air, and you" << endl;
					cout << "feel a great surge of unsettling emotion." << endl;
					npcArray[0]=1;
					choice = 0;
    				}
			else {
				return 1;
				//Move progress past so they don't get to fight the man again
				cout << "As you feel your body go limp and plummet to the ground below, you watch the man fade away" << endl;
				cout << "as if he never existed at all." << endl;
				}
		}
	}
	setIsDead (beachNPC, npcArray, 4);
	if(npcArray[0] == 1) {
		cout << "Your head is pounding, full of questions and fear. You notice a knife " << endl;
		cout << "begin to appear as the fog of what was a man clears." << endl << endl;
		cout << "Do you wish to pick up the knife?" << endl;
		flag = 0;
		while (flag == 0) {
		cin >> response;
		if (response == "yes") {
			cout << "You pick up the knife, noticing the intricacy of design that has been etched into the blade." << endl;
			// pickup knife
			flag = 1;
		}
		else if (response == "no") {
			cout << "You decide to leave the knife in effort to wipe all memories of this horrid experience." << endl;
			flag = 1;
		}
	
		else {
			cout << "Please enter 'yes' or 'no'." << endl;
		}
		}
	}
	cout << "You continue to walk along the beach. Your skin crawls with the overwhelming feeling that you are being watched." << endl;
	cout << "As if to calm your nerves, the horizon lights up with dark orange and yellow as the sun sets. You feel slightly relieved." << endl; 
	cout << "You notice a cave ahead. It is very dark, yet large enough to comfortably walk around in and use as shelter." << endl;
	cout << "Maybe it is home to a bear?" << endl << endl;
	cout << "What do you want to do?" << endl;
	cout << "1. Go inside the cave." << endl << "2. Continue to explore the beach." << endl;
	flag = 0;
	while (flag == 0) {
		
	cin >> response;
		if (response == "1") {
			//Make sure to check for torch
			cout <<"It's a good thing you grabbed that torch! You light it and walk inside." << endl;
			flag = 1;
		}
		else if (response == "2") {
			cout <<"You decide to continue walking around the beach, looking for clues for what is going on." << endl;
			flag = 1;
		}
		else { 
			cout <<"Please enter a valid command." << endl;
		}
		}
	}
	
}
