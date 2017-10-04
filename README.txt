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

