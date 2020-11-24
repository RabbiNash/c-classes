//
// Created by TINASHE on 11/24/2020.
//


#include "base.h"

int getNumberOfYear(int day){
    return (day / 365);
}


int getNumberOfWeeks(int day){
    return ((day %365)%31)/7;
}

int getNumberOfMonths(int day){
    return ((day%365)/31);
}

void exercise6(int day){
    int years = getNumberOfYear(day);
    int weeks = getNumberOfWeeks(day);
    int months = getNumberOfMonths(day);
    int days = day - ((years * 365) + (months * 31) + (weeks * 7));

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d\n", days);
}
