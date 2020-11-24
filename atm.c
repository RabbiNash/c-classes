//
// Created by Tinashe Makuti on 11/23/2020.
//

#include "base.h"

int getHundreds(int total) {
    return total / 100;
}

int getFifties(int total) {
    return (total%100)/50;
}

int getTens(int total) {
    return ((total%100)%50)/10;
}

int fives(int total) {
    return (((total%100)%50)%10)/5;
}

void dispense() {
    int total = 375;
    int hundreds = 0;
    int fifties = 0;
    int tens = 0;
    int fives = 0;

    printf("Hundreds %d \n", getHundreds(total));
    printf("Fifties %d \n", getFifties(total));
    printf("Tens %d \n", getTens(total));
    printf("Fives %d \n", fives);

    if (total / 100 > 0) {
        hundreds = total / 100;
        total %= 100;
    }

    if (total / 50 > 0) {
        fifties = total / 50;
        total %= 50;
    }

    if (total / 10 > 0) {
        tens = total / 10;
        total %= 10;
    }

    if (total / 5 > 0) {
        fives = total / 5;
        total %= 5;
    }

    printf("Hundreds %d \n", hundreds);
    printf("Fifties %d \n", fifties);
    printf("Tens %d \n", tens);
    printf("Fives %d \n", fives);

}

