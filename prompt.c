#include <stdio.h>


int totalDays() {
	int totalDays = 0;
	printf("Enter the number of days spent on the trip: ");
	scanf("%d", &totalDays);

	return totalDays;
}



void departTime() {
	char buff[5];
	int hour;
	int minute;
	printf("Enter depart time: ");
	scanf("%s", &buff);
	char *token = strtok(buff, ":");
	token = strtok(NULL, ":");
	// converting 24 hour to 12 hour
	int departTime = ((hour + 11) % 12 + 1);
	
	// Keep printing tokens while one of the
	// delimiters present in str[].
	if (token != NULL)
	{
		hour = atoi(token);
		token = strtok(NULL, ":");
		minute = atoi(token);
	}
	// converting 24 hour to 12 hour
	int *arriveTime = (((int)hour + 11) % 12 + 1) + (int)minute;
}

// double airFee()
// No parameter
// Prompts user for the cost of airfare
// Returns airfare price

double airFee() {

}

// int carsRented()
// No parameter
// Prompts user for total number of cars rented
// Returns number of cars rented

int carsRented() {

}

// int milesDriven()
// No parameter
// Prompts user for total miles driven (if using private vehicle)
// Returns miles driven

int milesDriven() {

}

// double parkingFee()
// No parameter
// Prompts user for parking fees
// Returns parking fees

double parkingFee() {

}
// double taxiFee()
// No parameter
// Prompts user for taxi fees
// Returns taxi fees

double taxiFee() {

}

// double conferenceFee()
// No parameter
// Prompts user for conference fees
// Returns conference fees

double conferenceFee() {


}

// double hotelFee()
// No parameter
// Prompts user for hotel fee
// Returns conference fees

double hotelFee() {

}
// int mealFee()
// No parameter
// Prompts user for amount of all meals
// Returns amount for each meals eaten
// Allowed meals

int mealFee() {

}