#include <stdio.h>
#include "Base.h"

//works with float int double and char
int intAddition(int a, int b){
    return a + b;
}

int intSubtraction(int a, int b){
    return a - b;
}

int intMultiplication(int a, int b){
    //a*=b; a = a * b
    return a * b;
}

int intDivision(int a, int b){
    //a/=b
    return a/b;
}

int intEuclideanDivision(int a, int b){
    return a % b;
}

