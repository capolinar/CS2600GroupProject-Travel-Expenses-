#include <stdio.h>

double totalMiles(miles)
{
	return miles * .27;
}

double calcTotal(int days, int departTime, int arriveTime, double airfee, 
int rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
{
	double total;
	total += airfee + rentalFee + totalMiles(miles) + parking + taxi + conference
	+ hotel + meals;
}

double calcTotalAllowed(int days, int departTime, int arriveTime, double airfee, 
int rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
{
	double total;
	total += totalMiles(miles) + air
}


double calcExcess(int days, int departTime, int arriveTime, double airfee, 
int rentalFee, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
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