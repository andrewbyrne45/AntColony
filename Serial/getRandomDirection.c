#include "header.h" 

int getRandomDirection()
{
	int r = rand();
	int percent = 15; // Probability adjustment for generating lower ints.
	int min = 0;
	int max = 100;

	int num; // Number to return.

	if (r < (RAND_MAX / percent / 10))
	{
		num = -(r % (max - min + 1) + min);
	}
	else
	{
		num = +(r % (max - min + 1) + min);
	}

	printf("number: %d", num);
	return num;
}