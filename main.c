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

void conditional(int a, int b){
    /* == equal
     * < lower than
     * < = lower or equal than
     * > greater than
     * > = greater or equal than
     * */

    if(a > b){

    }
    else if (a < b){

    } else {

    }

    //switch
    switch (a) {
        case 2:
            //do something
            break;
        case 3:
            //do something
            break;
        default:
            //do something on default behavior
            break;
    }
}

void loops(int a, int b){
    for (int i = 0; i < 10; i++){
        //loop till i is 9
    }

    while(a == 0){
        //do something
        a--;
    }

    a = 1;

    do {

    } while (a == 0);


}

