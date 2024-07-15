#include <stdio.h>

int main(){

    // POINTER ARITHMETHIC using INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The address of a is %u\n", ptr);

    // POINTER ARITHMETHIC using CHARACTER POINTER
    char a = 'x';
    char *ptr = &a;
    printf("The address of a is %u\n", ptr);
    ptr++;
    printf("The address of a is %u\n", ptr);
    return 0;
}