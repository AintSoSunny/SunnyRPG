/*The first part of this file includes templates for every "entity" in the game (including the player)
The second part defines the player, heroes, enemies, bosses, & npcs
Note: The player & the heroes may be moved to a seperate file*/
#include "entities.h"
#include "items.h"
class ent {
	protected:
	//ent types
	enum type{player, hero, enemy, boss, npc};
	//vars shared w/ all or most entities (>2)
	int HP, HPMax, exp, expMax, Lvl;
	item pocket[10][1]{}
};