#include <stdio.h>

double totalMiles(miles)
{
	return miles * .27;
}

double calcTotal(int days, int departTime, int arriveTime, double airfee, 
int rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals, int nights)
{
	double total;
	total += airfee + rentalFee + totalMiles(miles) + parking + taxi + conference
	+ hotel + meals;
}

double calcTotalAllowed(int days, int departTime, int arriveTime, double airfee, 
int rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals, int nights)
{
	double total;
	total += totalMiles(miles) + airfee + rentalFee + conference;//amounts can vary
	total += 6 * days; //max amount for parking a day
	total += 10 * days;//max amount for taxi a day
	total += 90 * nights;//max amount for each hotel night

	int fullDays = 0;//days with no travel
	if(days > 2)
	{
		fullDays = days -2 //travel days not including first or last;

	}
	total += fullDays * 37; //37 is total $ allowed for breakfast, lunch and dinner

	//meal costs depend on time
	//allowable amounts for first day
	if(departTime < 700)
	{
		total += 9; //breakfast if before 7am
	}
	else if(departTime > 700 && departTime < 1200)
	{
		total += 12; //lunch if before 12pm

	}
	else if(departTime > 1200 && departTime < 1800)
	{
		total += 16; //dinner if before 6pm
	}

	//allowable amounts for last day
	if(arriveTime > 800 && arriveTime < 1300)
	{
		total += 9; //breakfast if arrival after 8am 
	}
	else if(arriveTime > 1300 && arriveTime < 1900)
	{
		total += 12; //lunch if arrival after 1pm
	}
	else if(arriveTime > 1900)
	{
		total += 16;//dinner if arrival after 7pm
	}

	return total;

}


double calcExcess(int days, int departTime, int arriveTime, double airfee, 
int rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals, int nights)
{
	double total;
	total += totalMiles(miles) + rentalFee + airfee + conference;//any amount allowed
	if(parking > 6 * days)
	{
		total += 6 * days;
	}
	else
	{
		total += parking;

	}

	if(taxi > 10 * days)
	{
		total += 10* days;
	}
	else
	{
		total += taxi;

	}

	if(hotel > 90 * days)
	{
		total += 90 * days;
	}
	else
	{
		total += hotel;

	}
	
	double mealNum = days * 3;
	if(departTime > 700 && departTime < 1200)
	{
		mealNum -= 1;

	}
	else if(departTime > 1200 && departTime < 1800)
	{
		mealNum -= 2;
	}
	else if(departTime > 1800)
	{
		mealNum -= 3;
	}
	//meals needs to be combined with other calculation
}