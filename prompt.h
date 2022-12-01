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
	int hour = 0;
	int minute = 0;
    int dTime;
	printf("Enter depart time (24h): ");
	scanf("%s", &buff);

    // converting 24 hour to 12 hour
    dTime = atoi(buff);

	*departTime = dTime;

	printf("Enter arrive time (24h): ");
	scanf("%s", &buff);
    
	int aTime = atoi(buff);
	*arriveTime = aTime;
}

double airFee()
{
	double airFee = 0;
	printf("Enter air fee: ");
	scanf("%lf", &airFee);

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
	scanf("%lf", &parkingFee);

	return parkingFee;
}

double taxiFee()
{
	double taxiFee;
	printf("Enter Taxi Fee: ");
	scanf("%lf", &taxiFee);

	return taxiFee;
}

double conferenceFee()
{
	double conferenceFee;
	printf("Enter Conference Fee: ");
	scanf("%lf", &conferenceFee);

	return conferenceFee;
}

double hotelFee()
{
	double hotelFee;
	printf("Enter Hotel Fee: ");
	scanf("%lf", &hotelFee);

	return hotelFee;
}

double mealFee(int dTime, int aTime, int days)
{
	double total;
    double breakfastCost;
    double lunchCost;
    double dinnerCost;

    if(dTime < 700)
    {
        printf("Enter Breakfast Cost: ");
	    scanf("%lf", &breakfastCost);
        printf("Enter Lunch Cost: ");
	    scanf("%lf", &lunchCost);
        printf("Enter Dinner Cost: ");
	    scanf("%lf", &dinnerCost);
        total += breakfastCost + lunchCost + dinnerCost; //breakfast if before 7am
    }
    else if(dTime > 700 && dTime < 1200)
    {
        printf("Enter Lunch Cost: ");
	    scanf("%lf", &lunchCost);
        printf("Enter Dinner Cost: ");
	    scanf("%lf", &dinnerCost);
        total += lunchCost + dinnerCost; //lunch if before 12pm
    }
    else if(dTime > 1200 && dTime < 1800)
    {
        printf("Enter Dinner Cost: ");
	    scanf("%lf", &dinnerCost);
        total += dinnerCost; //dinner if before 6pm
    }

    // days inbetween
    int fullDays = 0; //days with no travel
    if(days > 2)
    {
        fullDays = days - 2; //travel days not including first or last;
    }

    for (int i = 0; i < fullDays; i++) {
        printf("Enter Breakfast Cost: ");
	    scanf("%lf", &breakfastCost);
        printf("Enter Lunch Cost: ");
	    scanf("%lf", &lunchCost);
        printf("Enter Dinner Cost: ");
	    scanf("%lf", &dinnerCost);
    }

    //allowable amounts for last day
    if(aTime > 800 && aTime < 1300)
    {
        printf("Enter Breakfast Cost: ");
	    scanf("%d", &breakfastCost);
        total += breakfastCost; //breakfast if arrival after 8am 
    }
    else if(aTime > 1300 && aTime < 1900)
    {
        printf("Enter Breakfast Cost: ");
	    scanf("%d", &breakfastCost);
        printf("Enter Lunch Cost: ");
	    scanf("%d", &lunchCost);
        total += lunchCost + breakfastCost; //lunch if arrival after 1pm
    }
    else if(aTime > 1900)
    {
        printf("Enter Breakfast Cost: ");
	    scanf("%d", &breakfastCost);
        printf("Enter Lunch Cost: ");
	    scanf("%d", &lunchCost);
        printf("Enter Dinner Cost: ");
	    scanf("%d", &dinnerCost);
        total += dinnerCost + lunchCost + breakfastCost; //dinner if arrival after 7pm
    }


	return total;
}
