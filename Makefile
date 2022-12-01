CC=gcc

program: travelExpenses.c travelFunctions.h prompt.h
	$(CC) -c main.c
