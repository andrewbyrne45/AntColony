#include "header.h" 

int main(int argc, char *argv[]) 
{
	srand(time(NULL));

	generateWorld(); // Create world

	printf("World generated, press any key to start generation.\n");
	getchar();

	int antsInNest = TOTAL_ANTS;
	for (int i = 1; i < 100; i++)
	{
		system("clear");
		if (antsInNest > 0)
		{
			removeAntFromNest();
			antsInNest--;
		}

		nextGeneration();
		showWorld();
		printf("\n");
		printf("Current Generation: %i\n", i);
		printf("Press any key to proceed to next generation.\n");
		getchar();
	}

	return 0;
}