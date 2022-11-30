#include <stdio.>
#include "functionstitlehere.h"
#define MPH .27

int main()
{
    int days, dTime, aTime, rents, miles, meals;
    double airfare, parking, taxi, conference, hotel;
    double drivingCost;
    double total, budget, excess;

    //setter function calls
    days = totalDays();
    departTime(&dTime, &aTime);
    airfare = airFee();
    rents = carsRents();
    miles = milesDriven();
    parking = parkingFee();
    taxi = taxiFee();
    conference = conferenceFee();
    hotel = hotelFee();
    meals = mealFee(); //meals need to be combined with calculating the amount of meals allowed.

    //calculate costs
    drivingCost = miles * MPH;
    total = calcTotal(days, dTime, aTime, airfare, rents, miles, parking, taxi, conference, hotel, meals); //rents to be changed to rental fees
    budget = calcTotalAllowed(days, dTime, aTime, airfare, rents, miles, parking, taxi, conference, hotel, meals); //boolean for private vehicle use needed
    excess = calcExcess(days, dTime, aTime, airfare, rents, miles, parking, taxi, conference, hotel, meals);

    //display totals
    displayTotal(total);
    displayTotalALlowed(budget);
    displayExcess(excess);

    return 0;
}
