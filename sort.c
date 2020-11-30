//
// Created by TINASHE on 11/26/2020.
//

#include "sort.h"

void swapElements(int *a, int *b) {
    int *temp;

    temp = (int *) *a;
    *a = *b;
    *b = (int) temp;
}

void bubbleSort(int *myArray, int length) {
    for (int i = 0; i < length; i++) {
        int isSwapped = 0;
        printf("pass %d\n", i);
        for (int j = 0; j < length - i - 1; j++) {
            if (myArray[j] < myArray[j + 1]) {
                printf("swap J %d with J + 1: %d\n", myArray[j], myArray[j + 1]);
                swapElements(&myArray[j], &myArray[j + 1]);
                isSwapped = 1;
            }
        }

        if (isSwapped == 0) break;

    }

    for (int i = 0; i < 7; i++) {
        printf("%d", myArray[i]);
    }
}

void merge(int *myArray, int lb, int mid, int ub) {
    //let ptr1 be the pointer that starts at the lower bound, ptr2 start at mid
    int ptr1 = lb;
    int ptr2 = mid;
    int ptr3 = lb;

    int mergeList[7];

    while ((ptr1 < mid) && (ptr2 <= ub)) {
        if (myArray[ptr1] <= myArray[ptr2]) {
            mergeList[ptr3] = ptr1;
            ptr1++;
            ptr3++;
        } else {
            mergeList[ptr3] = ptr2;
            ptr2++;
            ptr3++;
        }
    }

    while (ptr1 < mid) {
        mergeList[ptr3] = myArray[ptr1];
        ptr1++;
        ptr3++;
    }

    while (ptr2 <= ub) {
        mergeList[ptr3] = myArray[ptr2];
        ptr2++;
        ptr3++;
    }

    for (int i = lb; i < ptr3; i++) {
        myArray[i] = mergeList[i];
    }
}

void mergeSort(int *myArray, int lb, int ub) {

    int mid;

    if (lb < ub) {
        mid = (lb + ub) / 2;
        mergeSort(myArray, lb, mid);
        mergeSort(myArray, mid + 1, ub);
        merge(myArray, lb, mid + 1, ub);
    }
}

int main(void) {
    int myArray[7] = {1, 2, 4, 9, 3, 7, 6};

//    selectionSort(myArray, 7);
//    bubbleSort(myArray, 8);
    mergeSort(myArray, 0, 6);

    for (int i = 0; i < 7; i++) {
        printf("Sorted from Merge sort %d\n", myArray[i]);
    }

    return 0;
}

void selectionSort(int *myArray, int length) {
    for (int i = 0; i < length; i++) {
        printf("Pass %d\n", i);
        for (int j = i + 1; j <= length; j++) {
            if (myArray[j] < myArray[i]) {
                printf("swap (j) = %d  with (i) = %d  \n", myArray[j], myArray[i]);
                swapElements(&myArray[i], &myArray[j]);
            }
        }
    }

    for (int i = 0; i < length; i++) {
        printf("Sorted array is %d\n", myArray[i]);
    }
}

