CC=gcc

program: main.c travelFunctions.h prompt.h
	$(CC) -c main.c