//headers


//functions here
//total expenses calculation
//total allowable expenses calculation(departure/arrival times)
//excess that must be reimbursed, if any calculation
//amount saved by employee if under total allowed calculation










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
#include <stdio.h>
#include "travelFunctions.h"
#include "prompt.h"
#define MPH .27

int main()
{
    int days, nights, dTime, aTime; //changed "rents" to "rentalFee" // added "nights"
    double airfare, parking, taxi, conference, hotel, rentalFee, miles, meals; //moved a few variables to be a double
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
        if((dTime < 0 || dTime > 2400) || (aTime < 0 || aTime > 2400))
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
        meals = mealFee(dTime, aTime, days); //meals need to be combined with calculating the amount of meals allowed.
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
    displayTotalAllowed(budget);
    displayExcess(total, budget);
    
    exit(EXIT_SUCCESS);
    return 0;
}
