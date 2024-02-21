/******************************************************************************
Name: Akil Elias
INFO 0103/0104 Introduction to Computer Programming  

A construction company determines its charges as a percentage of the cost of a building. 
The charges are made up as follows: 10% of the first $10 000.00 of the cost of a building and 
5% on the remainder if the remainder is less than or equal to $100 000.00 or 3% on the remainder 
if the remainder is more than $100 000.00. Write a program to accept the estimated cost of a building 
and calculate and display the fee the company would charge.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int buildingCost;
    double fee; 
    int Remainder;
    int thresholdOne = 10000; 
    int thresholdTwo = 100000;
    int firstCommission = thresholdOne *0.10;
    
    printf("Enter the cost of the building \n");
    scanf("%d", &buildingCost);
    
    Remainder = buildingCost - thresholdOne;
    
    if(buildingCost < thresholdOne){
        fee = buildingCost*0.10;
        printf("Our fee is $%.2f", fee);
    } else if(buildingCost > thresholdOne && Remainder < thresholdTwo){
        fee = Remainder*0.05 + firstCommission;
        printf("Our fee is $%.2f", fee);
    } else if(buildingCost > thresholdOne && Remainder > thresholdTwo){
        fee = Remainder*0.03 + firstCommission;
        printf("Our fee is $%.2f", fee);
    } else {
        printf("Invalid input");
    }

    return 0;
}


