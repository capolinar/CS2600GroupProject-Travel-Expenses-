#include <stdio.h>

double totalMiles(double miles) //27 cents per mile driven
{
	return miles * .27;
}

double calcTotal(int days, int nights, int dTime, int aTime, double airFare, 
double rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
{
	double total;
	total += airFare + rentalFee + totalMiles(miles) + parking + taxi + conference
	+ hotel + meals;
}

double calcTotalAllowed(int days, int nights, int dTime, int aTime, double airFare, 
double rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
{
	double total;
	total += totalMiles(miles) + airFare + rentalFee + conference;//amounts can vary
	total += 6 * days; //max amount for parking a day
	total += 10 * days;//max amount for taxi a day
	total += 90 * nights;//max amount for each hotel night

	int fullDays = 0;//days with no travel
	if(days > 2)
	{
		fullDays = days -2; //travel days not including first or last;

	}
	total += fullDays * 37; //37 is total $ allowed for breakfast, lunch and dinner

	//meal costs depend on time
	//allowable amounts for first day
	if(dTime < 700)
	{
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
		total += 16;//dinner if arrival after 7pm
	}

	return total;

}

void displayTotal(double total)
{
	printf("Total Expenses for whole trip: %f\n", total);
}

void displayTotalAllowed(double budget)
{
	printf("Total Allowed Expenses for whole trip: %f\n", budget);
}

void displayExcess(double total, double budget)
{
	double excess = total - budget;
	if(excess >= 0) //if there was excess
	{
		printf("Excess: $%f\n", excess); 
	}
	else //if there was any savings
	{
		excess *= -1; //convert negative excess into savings
		printf("Saved: $%f\n", excess);
	}
}