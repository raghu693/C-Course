#include <stdio.h>
#include <stdlib.h>

int main(){
    // 1. Write a program to dynamically create an array of size 6 capable of storing 6 integers.
    // 2. Use the array in problem 1 to store 6 integers entered by the user.
    int n = 6;
    int *ptr;

    ptr = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++){
        scanf("%d", &ptr[i]);
    }
        printf("%d", ptr[0]);
        printf("%d", ptr[1]);
        printf("%d", ptr[2]);
        printf("%d", ptr[3]);
        printf("%d", ptr[4]);
        printf("%d", ptr[5]);
    

    return 0;
}