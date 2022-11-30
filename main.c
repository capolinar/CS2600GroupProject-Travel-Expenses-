#include <stdio.>
#include "functionstitlehere.h"
#define MPH .27

int main()
{
    int days, dTime, aTime, rentalFee, miles, meals; //changed "rents" to "rentalFee"
    double airfare, parking, taxi, conference, hotel;
    double drivingCost;
    double total, budget, excess;
    bool privateCar; //added boolean for private vehicle
    

    //setter function calls
    days = totalDays();
    departTime(&dTime, &aTime);
    airfare = airFee();
    rentalFee = carsRents();
    miles = milesDriven(&privateCar); //added parameter to switch bool and return amount of miles
    parking = parkingFee();
    taxi = taxiFee();
    conference = conferenceFee();
    hotel = hotelFee();
    meals = mealFee(); //meals need to be combined with calculating the amount of meals allowed.

    //calculate costs
    drivingCost = miles * MPH;
    total = calcTotal(days, dTime, aTime, airfare, rentalFee, miles, privateCar, parking, taxi, conference, hotel, meals); //rents to be changed to rental fees
    budget = calcTotalAllowed(days, dTime, aTime, airfare, rentalFee, miles, privateCar, parking, taxi, conference, hotel, meals); //boolean for private vehicle use needed
    excess = calcExcess(days, dTime, aTime, airfare, rentalFee, miles, privateCar, parking, taxi, conference, hotel, meals);
    //changed "rents" vars to updated "rentalFee" + added boolean for private vehicles

    //display totals
    displayTotal(total);
    displayTotalALlowed(budget);
    displayExcess(excess);

    return 0;
}
