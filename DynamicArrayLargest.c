//
// Created by TINASHE on 11/25/2020.
//

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int largest(int *container, int size);

int mainLargest(void) {
    int container_size;

    srand(time(0));
    container_size = rand() % 100;

    printf("Input total number of elements(1 to 100): %d \n", container_size);
    int *container = (int *) malloc(10 * sizeof(int));
    for (int i = 0; i < container_size; i++) {
        container[i] = rand() % 100;
        printf("Number %d: %d\n", i, container[i]);
    }

    printf("The largest element is : %d", largest(container, container_size));

    return 0;
}

int largest(int *container, int size) {
    int *tempcontainer;
    int largest;

    tempcontainer = container;
    largest = tempcontainer[0];

    for (int i = 0; i < size; ++i) {
        largest = tempcontainer[i] > largest ? tempcontainer[i] : largest;
    }

    return largest;
}

