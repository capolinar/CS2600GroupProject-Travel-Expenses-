#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int totalDays()
{
	int totalDays = 0;
	printf("Enter the number of days spent on the trip: ");
	scanf("%d", &totalDays);

	return totalDays;
}


void departTime(int *departTime, int *arriveTime)
{
	char buff[5];
	int hour;
	int minute;

	printf("Enter depart time (24h): ");
	scanf("%s", &buff);

	hour = atoi(strtok(buff, ":"));
	minute = atoi(strtok(NULL, ":"));
	// converting 24 hour to 12 hour
	int dTime = hour * 100 + minute;
	*departTime = dTime;

	printf("Enter arrive time (24h): ");
	scanf("%s", &buff);

	hour = atoi(strtok(buff, ":"));
	minute = atoi(strtok(NULL, ":"));
	// converting 24 hour to 12 hour
	int aTime = hour * 100 + minute;
	*arriveTime = aTime;
}

double airFee()
{
	double airFee;
	printf("Enter air fee: ");
	scanf("%f", &airFee);

	return airFee;
}

int carsRented()
{
	int carsRent;
	printf("Enter total number of cars rented: ");
	scanf("%d", &carsRent);

	return carsRent;
}

int milesDriven()
{
	int miles = 0;
	int input;
	printf("Was a private vehicle used?\n(1) for Yes\n(2) for No");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("Enter Total Miles Driven: ");
		scanf("%d", &miles);
	}

	return miles;
}

double parkingFee()
{
	double parkingFee;
	printf("Enter Parking Fee: ");
	scanf("%f", &parkingFee);

	return parkingFee;
}

double taxiFee()
{
	double taxiFee;
	printf("Enter Taxi Fee: ");
	scanf("%f", &taxiFee);

	return taxiFee;
}

double conferenceFee()
{
	double conferenceFee;
	printf("Enter Conference Fee: ");
	scanf("%f", &conferenceFee);

	return conferenceFee;
}

double hotelFee()
{
	double hotelFee;
	printf("Enter Hotel Fee: ");
	scanf("%f", &hotelFee);

	return hotelFee;
}

int mealFee()
{
	int mealFee;
	printf("Enter Meal Fee: ");
	scanf("%d", &mealFee);

	return mealFee;
}