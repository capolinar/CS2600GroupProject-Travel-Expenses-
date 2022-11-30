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
double airFee;
printf("Enter air fee: ");
scanf("%f", &airFee);

return airFee;
}

// int carsRented()
// No parameter
// Prompts user for total number of cars rented
// Returns number of cars rented

int carsRented() {
    int carsRent;
printf("Enter total number of cars rented: ");
scanf("%d", &carsRent);

return carsRent;
}

// int milesDriven()
// No parameter
// Prompts user for total miles driven (if using private vehicle)
// Returns miles driven

int milesDriven() {
    int miles = 0;
    int input;
    printf("Was a private vehicle used?\n(1) for Yes\n(2) for No");
    scanf("%d", &input);
    
    if(input == 1) {
        printf("Total Miles Driven: ");
        scanf("%d", &miles);
    }

    return miles;

}

// double parkingFee()
// No parameter
// Prompts user for parking fees
// Returns parking fees

double parkingFee() {
    double parkingFee;
    printf("Enter Parking Fee: ");
    scanf("%f", &parkingFee);

    return parkingFee;
}
// double taxiFee()
// No parameter
// Prompts user for taxi fees
// Returns taxi fees

double taxiFee() {
    double taxiFee;
    printf("Enter Taxi Fee: ");
    scanf("%f", &taxiFee);

    return taxiFee;
}

// double conferenceFee()
// No parameter
// Prompts user for conference fees
// Returns conference fees

double conferenceFee() {
    double conferenceFee;
    printf("Enter Conference Fee: ");
    scanf("%f", &conferenceFee);

    return conferenceFee;
}

// double hotelFee()
// No parameter
// Prompts user for hotel fee
// Returns conference fees

double hotelFee() {
    double hotelFee;
    printf("Enter Hotel Fee: ");
    scanf("%f", &hotelFee);

    return hotelFee;
}
// int mealFee()
// No parameter
// Prompts user for amount of all meals
// Returns amount for each meals eaten
// Allowed meals

int mealFee() {

}