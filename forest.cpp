// This file represents all features of the forest 
#include <iostream>
#include <fstream>
#include <string>
#include "objects.hpp"
#include "functions.hpp"

using namespace std;
int forest (Character& player) {
    int npcArray[4];
    fstream forestNPC;
    // Reads what monsters are dead
    forestNPC.open("forestNPC.txt");
    readIsDead (forestNPC, npcArray);

    cout << "You step outside into the forest. Before you have a chance to look around, a wolf jumps from the shadows, biting at your throat." << endl;
    NPC wolf;
	ifstream npcFile;
	npcFile.open("npcList.txt");
	findNPC(npcFile, wolf, "wolf");
	if (npcArray[0] == 0) {		
		fightFunction(player, wolf);
    		if (player.totalHealth >= 5) {
    			cout << "Congratulations on defeating that wolf! You didn't even break a sweat." << endl;
			npcArray[0]=1;
    			}
    		else if (player.totalHealth < 5 && player.totalHealth > 0) {
    			cout << "Congratulations on defeating that wolf! You barely survived though." << endl;
			npcArray[0]=1;
    			}
		else {
			return 1;
			}
	}
	setIsDead (forestNPC, npcArray, 4);
	
	cout << "Despite that sudden, bloody encounter, your spirits begin to lift as you survey the forest around you." << endl;
	cout << "What would you like to do?" << endl;
	cout << "1. Go to the left." << endl << "2. Go to the right" << endl << "3. Look around" << endl;
	int flag = 0;
	int choice = 0;
	
	while (flag == 0) {
		int choice = 0;
		cin >> choice;
		if (choice == 1) {
			cout << "You walk along the edge of the forest for about a mile until you stumble across a quaint beach. As far as you can tell, no one's been here in ages" << endl;
			flag = 1;
			return 3;
		}
		else if (choice == 2) {
			cout << "You walk along the edge of the forest for about a mile until you notice a small, decrepit looking graveyard to your left." << endl;
			flag = 1;
			return 4;
		}
		else if (choice == 3) {
			cout << "You gaze at the forest around you. The tall evergreens shift slightly in the wind. Above you, the sun begins its descent in the sky and you guess you have at least an hour until it is set. Despite how ancient the house looks, it holds a comforting air about it. The air is cool and eerily silent." << endl;
			cout << "Would you like to walk around the house?" << endl;
		cout << "1. Yes" << endl << "2. No" << endl;
			while (flag == 0) {
				cin >> choice;
				if (choice == 1) {
					cout << "You make your way to the rear of the house where you find a small garden. Nothing seems be growing in it." << endl;
					cout << "Would you like to dig in the garden?" << endl;
					cout << "1. Yes" << endl << "2. No" << endl;
					while (flag == 0) {
						cin >> choice;
						if (choice == 1) {
							cout << "You get down on your knees and sift through the dry dirt." << endl;
							cout << "You found a leather helmet." << endl;
							//Set leatherHelmet = 1
							flag++;
							}
					else if (choice == 2) {
							cout << "You return to the front of the house." << endl;
							flag++;
						}
						else {
							cout << "Please enter a valid command." << endl;
							cin >> choice;
						}
					}
				}
					else if (choice == 2) {
						flag++;
					}
					else {
						cout << "Please enter a valid command." << endl;
						cin >> choice;
					}
				}
			}
		else {
			cout << "Please enter a valid command." << endl;
			cin >> choice;
		}
}
    forestNPC.open("forestNPC.txt");
    forestNPC.close();
    return 1; 
    
}
  
