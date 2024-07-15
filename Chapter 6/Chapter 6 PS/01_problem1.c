#include <stdio.h>

int main(){
    // Write a program to print the address of a variable. Use this address to get the value of the variable.

    int i = 7;
    int* j = &i;
    printf("The Address of i is %p\n", j);
    printf("The value of i is %d\n", *j);
    return 0;
}