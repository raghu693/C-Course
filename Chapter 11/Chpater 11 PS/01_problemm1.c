#include <stdio.h>
#include <stdlib.h>

int main(){
    // 1. Write a program to dynamically create an array of size 6 capable of storing 6 integers.
    int n = 6;
    int *ptr;

    ptr = malloc(n*sizeof(int));
   printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);
    printf("%d\n", ptr[2]);
    printf("%d\n", ptr[3]);
    printf("%d\n", ptr[4]);
    printf("%d\n", ptr[5]);

    return 0;
}