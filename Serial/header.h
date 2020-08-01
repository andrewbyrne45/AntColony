#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <pthread.h>

// World Definitions
#define WORLD_WIDTH 10
#define WORLD_HEIGHT 10

// Ant Definitions
#define TOTAL_ANTS 4  // Total number of ants to start with in the nest.

// Food & Nest Locations
#define FOOD_X 2
#define FOOD_Y 2
#define NEST_X 5
#define NEST_Y 5

// World Definitions
#define EMPTY_CELL 0
#define ANT_CELL 1
#define FOOD_CELL 2
#define NEST_CELL 3

// Functions 
int getRandomDirection();
void generateWorld();
void nextGeneration();
void showWorld();
void removeAntFromNest();

// Global Variables
int WORLD[WORLD_WIDTH][WORLD_HEIGHT];