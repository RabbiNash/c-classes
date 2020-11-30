//
// Created by TINASHE on 11/25/2020.
//

#include "stdio.h"
#include "stdlib.h"

int* appendArray(int* ptr, int val, int size_of_array){
    printf("size_of_array : %d", size_of_array);
    int * myNewArray = (int*)malloc(size_of_array + 1 * sizeof(int));

    for (int i = 0; i < (size_of_array /sizeof(int)); i++) {
        myNewArray[i] = ptr[i];
    }

    printf("Size of things: %d", (sizeof(ptr)));
    myNewArray[(size_of_array / sizeof(int))] = val;
    size_of_array += 1;
    free(ptr);
    ptr = myNewArray;

    return ptr;
}

int mainAppend(void){
    int myArray[3] = {1,2,3};

    int* array = appendArray(myArray, 4, (int) 3);

    for (int i = 0; i < 4; ++i) {
       printf("Array element %d : %d\n", i, myArray[i]);
    }

    return 0;
}