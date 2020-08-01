#include "header.h" 

void showWorld()
{
	for (int i = 0; i < WORLD_WIDTH; i++)
	{
		for (int j = 0; j < WORLD_HEIGHT; j++)
		{
			printf("%i", WORLD[i][j]);
		}
		printf("\n");
	}
}