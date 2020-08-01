#include "header.h" 

void generateWorld()
{
	// Place our nest and food within the world.
	WORLD[NEST_X][NEST_Y] = NEST_CELL;
	WORLD[FOOD_X][FOOD_Y] = FOOD_CELL;
}