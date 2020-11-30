//
// Created by TINASHE on 11/26/2020.
//

#include "Recursion.h"

int recursionMain(void){
    printNumber(5);
//    printf("The factorial of 5 is %d", factorial(6));
    int myArray[5] = {1,2,3,4,5};
    printArrayElement(myArray, 0, 5);

    return 0;
}

int printNumber(int n){
    if(n <= 50){
        printf("%d\n", n);
        printNumber(n + 1);
    }
}

void printArrayElement(int* myArray, int index, int size){
    if(index != size){
        printf("Array elements %d\n", myArray[index] );
        printArrayElement(myArray, index + 1, size);
    }
}


int factorial(int n){
    if(n < 1) return 1;

    return (n * factorial(n - 1));
}

