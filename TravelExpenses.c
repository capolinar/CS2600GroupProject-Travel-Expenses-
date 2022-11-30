//headers


//functions here
//total expenses calculation
//total allowable expenses calculation(departure/arrival times)
//excess that must be reimbursed, if any calculation
//amount saved by employee if under total allowed calculation

double totalMiles(miles)
{
	return miles * .27;
}

double calcTotal(int days, int departTime, int arriveTime, double airfee, 
int cars, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
{
	double total;
	total += airfee + cars + totalMiles(miles) + parking + taxi + conference
	+ hotel + mealFee();
}

double calcTotalAllowed(int days, int departTime, int arriveTime, double airfee, 
int cars, double miles, double parking, double taxi, 
double conference, double hotel, double meals)
{
	double total;
	total += totalMiles(miles) + cars + airfee + conference;//any amount allowed
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








//main

//for any user input, input validation required(no negatives for money or miles)
//at least 1 for number of days traveled
//only valid times for departure/arrival(no negative times)

//ask for number of days on trip

// ask for departure and arrival times

//ask for amount of round-trip airfare

//ask for amount of any car rentals

//ask for miles driven, if private vehicle used, calculate expense as .27 cents a mile

//ask for parking fees

//ask for taxi fees

//ask conference or seminar fees

//ask for hotel expneses

//ask for amount of each meal eaten(only allowable)

//first day, breakfast is allowed if departure is before 7
//lunch if departure is before 12 noon
//dinner if before 6 pm

//last day, breakfast is allowed if arrival is after 8am
//lunch if after 1pm
//dinner if after 7pm

