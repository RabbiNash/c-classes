//
// Created by TINASHE on 11/24/2020.
//

#include "stdlib.h"
#include "stdio.h"

int main(void){
    int** my2DimArray;

    //create a 10 x 8 array
    //initialise the row of my array
    my2DimArray = (int *) malloc(10 * sizeof(int*));

    for (int i = 0; i < 10; i++) {
        my2DimArray[i] = (int*) malloc(8*sizeof(int ));
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 8; j++) {
            my2DimArray[i][j] = i + j;
        }
    }

    printf("Array at first second: %d", my2DimArray[0][1]);
    return 0;
}

