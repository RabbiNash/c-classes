//
// Created by TINASHE on 11/25/2020.
//
#include <time.h>
#include "stdio.h"
#include "stdlib.h"

int mainRandom(void){
    int random_number;

    //type to store time in ms
    time_t t;

    //generate the seed
    srand((unsigned )time(&t));

    random_number = rand() % 50;

    printf("Random number is :  %d", random_number);

    printf("RAND MAX : %d", RAND_MAX);


    return 0;
}