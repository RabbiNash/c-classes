//
// Created by TINASHE on 11/25/2020.
//

#include "stdio.h"

void swap(int* a, int* b, int* c){
    int* temp;

    temp = (int *) *b;
    *b = *a;
    *a = *c;
    *c = (int) temp;
}

int mainSwap(void){
    int a = 5;
    int b = 6;
    int c = 7;

    swap(&a,&b, &c);

    printf("A is : %d \n", a);
    printf("B is : %d \n", b);
    printf("C is : %d \n", c);
}