// This file represents all features of the beach 
#include <iostream>
#include <fstream>
#include <string>
#include "objects.hpp"
#include "functions.hpp"

using namespace std;
int forest (Character& player) {
    int npcArray[4];
	int flag = 1;
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
		cin >> string;
		if (string == "yes") {
			flag = 1;
			choice = 1;
		}
		else if (string == "no") {
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
	if (choice = 1) {
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
	
}
