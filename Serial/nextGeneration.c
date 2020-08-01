#include "header.h" 

void nextGeneration()
{
    for (int x = 0; x < WORLD_WIDTH; x++)
    {
        for (int y = 0; y < WORLD_HEIGHT; y++)
        {
            int thisCell = WORLD[x][y];
            if (thisCell > ANT_CELL) // If there is an ant here.
            {
                int direction = getRandomDirection();
                int newX, newY;

                if (direction == 1) {newY = y + 1;}
                else if (direction == 2) {newY = y - 1;}
                else if (direction == 3) {newX = x + 1;}
                else if (direction == 4) {newX = x - 1;}

                WORLD[newX][newY] = ANT_CELL; // Place an ant
                WORLD[x][y] = EMPTY_CELL; // Remove the ant from the old position.
            }
        }
    }
}