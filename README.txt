# game1
need to make structs for each location and file outputs for what has been done in each (dialogue = 1) 
when main runs it reads each file and updates the objects so that it knows what has been completed and what not to offer (can't get items (more than once)
when each location is finished another function is called to write out to each file with the information within the object

inventory and weapon system:

might want to try dynamically allocating memory so that the weapons can be added to a list as they are found or created

weapons could be an array of structs weapon[0]-weapon[x] where the struct lays out what information is stored about the object (weapon ID, found true or false, damage, description, etc., is it equiped(t or f))
  on second thought this might be better done as a class

this massive array of information might be able to be fed into the functions at each location and the values changed as they are found so that when the inventory is called it shows up

how can the inventory be called at any time and how can an item be equipped or used?
is the inventory able to be called at each step as a seperate option?


monsters should have independent classes called in a header file, and within each location the monsters can be called and have independent names so that they don't need to be referred to outside of the functions. 

to determine that a monster is dead it might help to call a file at the beginning of each location with a list of monster, and if you have already killed them set that value to 1 and when you return to that location they shouldn't respawn so long as the file has been updated


******* Important *******
At the beginning of the location, a file should be read to see what is dead
when the user leaves the area or quits, the file should be updated

use a dynamic array to store the values a file returns and use those in the order, for example

readfile -> 0 0 0 0 1 -> array
this indicates there are 5 monsters in the area
the function may look like :
NPC goblin
NPC wolf
NPC wolf2
NPC spider
NPC spider2

then implement 
goblin.isDead = array[0]
wolf.isDead = array [1]
...
spider2.isDead = array[4]

have function that writes out to this file again, writing out the changed array values.
If everything is dead, the file should look like 
readfile -> 1 1 1 1 1 


**** Also important ****

we might be abe to remove dialogue by only printing if the user is before a certain value
for example, player class might have something that looks like player.progress

For the first cutscene/dialogue player.progress might be 0.
after the cutscene, player.progress might be 1 (player.progress ++)
Have conditional statement around dialogue saying only to print off if the progress is less than 1
next cutscene brings it up to 2
examining objects could just remain the same, not affected by cutscenes

this also might have to be done for each area, so that entering one area doesn't raise the progress so that you can't see dialogue in another area

player.HouseProgress?
player.BeachProgress?


