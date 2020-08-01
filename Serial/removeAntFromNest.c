#include "header.h" 

void removeAntFromNest()
{
	int direction = getRandomDirection();
	int newX, newY;

	if (direction == 1) {newY = NEST_Y + 1;}
	else if (direction == 2) {newY = NEST_Y - 1;}
	else if (direction == 3) {newX = NEST_X + 1;}
	else if (direction == 4) {newX = NEST_X - 1;}

	WORLD[newX][newY] = ANT_CELL; // Place an ant
}