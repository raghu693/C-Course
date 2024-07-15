#include <stdio.h>

void swap(int*, int*);

void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}


int main(){
    int x = 12;
    int y = 2;
    swap(&x, &y);
    printf("\nThe value of x is %d\nThe value of y is %d\n\n", x, y);
    return 0;
}