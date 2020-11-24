//
// Created by TINASHE on 11/24/2020.
//

#include "stdio.h"
#include "stdlib.h"

int* append(int* ptr, int val, int* size_of_array){
    printf("size_of_array : %d", *size_of_array);
    int * myNewArray = (int*)malloc(*size_of_array + 1 * sizeof(int));

    for (int i = 0; i < (*size_of_array /sizeof(int)); i++) {
        myNewArray[i] = ptr[i];
    }

    printf("Size of things: %d", (sizeof(ptr)));
    myNewArray[(*size_of_array / sizeof(int))] = val;
    *size_of_array += 1;
    free(ptr);
    ptr = myNewArray;

    return ptr;
}

int DynamicArrayMain(void){
    int* myArray;
    size_t size_of_array = 10;

    //10 * 4 = 40 byte sizeof(int)=4
    //same as int myArray[10]
    myArray = (int*) malloc(size_of_array* sizeof(int));

    for (int i = 0; i < size_of_array; i++) {
        myArray[i] = i;
    }

    myArray = append(myArray, 5, size_of_array);

    printf("Array at 11th: %d", myArray[10]);

    return 0;
}
