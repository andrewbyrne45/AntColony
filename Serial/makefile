run:
	clear
	make generate
	make compile
	./antColony
generate: main.c removeAntFromNest.c generateWorld.c getRandomDirection.c nextGeneration.c showWorld.c
	gcc main.c -o main.o removeAntFromNest.c -o removeAntFromNest.o generateWorld.c -o generateWorld.o getRandomDirection.c -o getRandomDirection.o nextGeneration.c -o nextGeneration.o showWorld.c -o showWorld.o -lm -lpthread
compile: main.c removeAntFromNest.c generateWorld.c getRandomDirection.c nextGeneration.c showWorld.c
	gcc -o antColony main.c removeAntFromNest.c generateWorld.c getRandomDirection.c nextGeneration.c showWorld.c -lm -lpthread
clean:
	rm *.o
	rm antColony