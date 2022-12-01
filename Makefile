CC=gcc

program: main.c travelFunctions.h prompt.h
	$(CC) -c main.c

validInputText:
	a.exe <validInput.txt
	print("expected: x")