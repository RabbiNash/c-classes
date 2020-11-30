//
// Created by TINASHE on 11/25/2020.
//

#include "stdio.h"

int len(const char *s);

int mainLen(void){
    char str[1000];

    printf("Input a string");
    gets(str);

    printf("The length of the given string %s is : %d", str, len(str));

    return 0;
}

int len(const char *s){
    int count = 0;

    while (s[count] != '\0')
        count++;

    return count;
}

