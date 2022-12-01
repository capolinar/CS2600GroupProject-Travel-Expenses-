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

int rentFee()
{
	int carsRent;
	printf("Enter total amount for car rentals: ");
	scanf("%d", &carsRent);

	return carsRent;
}

int milesDriven()
{
	int miles = 0;
	int input;
	printf("Was a private vehicle used?\n(1) for Yes\n(2) for No\n");
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

int mealFee(int *dTime, int *aTime) //needs to ask and determine allowable meals
{
	int total;

    if(dTime < 700)
    {
        printf("Enter Meal Fee: ");
	    scanf("%d", &total);
        total += 9; //breakfast if before 7am
    }
    else if(dTime > 700 && dTime < 1200)
    {
        total += 12; //lunch if before 12pm
    }
    else if(dTime > 1200 && dTime < 1800)
    {
        total += 16; //dinner if before 6pm
    }

    
    //allowable amounts for last day
    if(aTime > 800 && aTime < 1300)
    {
        total += 9; //breakfast if arrival after 8am 
    }
    else if(aTime > 1300 && aTime < 1900)
    {
        total += 12; //lunch if arrival after 1pm
    }
    else if(aTime > 1900)
    {
        printf("Enter Meal Fee: ");
	    scanf("%d", &total);
        total += 16;//dinner if arrival after 7pm
    }


	return total;
}
