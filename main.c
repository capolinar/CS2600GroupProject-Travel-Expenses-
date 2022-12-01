#include <stdio.>
#include "travelFunctions.h"
#include "prompt.h"
#define MPH .27

int main()
{
    double days, nights, dTime, aTime, rentalFee, miles, meals; //changed "rents" to "rentalFee" // added "nights"
    double airfare, parking, taxi, conference, hotel;
    double drivingCost;
    double total, budget;
    int check; //added a check for integrity of numbers
    
    //setter function calls
    do {
        check = 0;
        days = totalDays();
        if(days < 0)
        {
            check = 1;
            printf("Enter value greater than 0\n");
        }
    } while(check == 1);
    do {
        check = 0;
        departTime(&dTime, &aTime);
        if((dTime == 0 || dtime > 24) || (aTime == 0 || aTime > 24))
        {
            check = 1;
            printf("Enter valid time for departure and arrival\n");
        }
    } while(check == 1);
    do {
        check = 0;
        airfare = airFee();
        if(airfare < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        rentalFee = rentFee(); //changed func name from "carRents" to "rentFee"
        if(rentalFee < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        miles = milesDriven(); //removed paramters for privateCar
        if(miles < 0)
        {
            check = 1;
            printf("Enter nonnegative mile value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        parking = parkingFee();
        if(parking < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        taxi = taxiFee();
        if(taxi < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        conference = conferenceFee();
        if(conference < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        hotel = hotelFee();
        if(hotel < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);
    do {
        check = 0;
        meals = mealFee(); //meals need to be combined with calculating the amount of meals allowed.
        if(conference < 0)
        {
            check = 1;
            printf("Enter valid monetary value\n");
        }
    } while(check == 1);

    //calculate costs
    drivingCost = miles * MPH;
    nights = nightsOnTrip(days); //added nightsOnTrip function
    total = calcTotal(days, nights, dTime, aTime, airfare, rentalFee, miles, parking, taxi, conference, hotel, meals); //rents to be changed to rental fees
    budget = calcTotalAllowed(days, nights, dTime, aTime, airfare, rentalFee, miles, parking, taxi, conference, hotel, meals); //boolean for private vehicle use needed
    //changed "rents" vars to updated "rentalFee" + added boolean for private vehicles
    //removed excess = calcExcess

    //display totals
    displayTotal(total);
    displayTotalALlowed(budget);
    displayExcess(total, budget);
    
    exit(EXIT_SUCCESS);
    return 0;
}
