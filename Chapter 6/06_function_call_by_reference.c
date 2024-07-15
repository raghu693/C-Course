#include <stdio.h>

int sum(int*, int*);

// Sum Function agar dam hai to c ki value change kar kar dhikha 
int sum(int* a, int* b){
    *a = 12;
    return *a + *b;
}

// are are bhai dil pe le liya kya

int main(){
    int x = 2, y = 3; 
    int a = sum(&x, &y);
    printf("The value of 2 + 3 is %d\n", a);
    printf("The value of x is %d\n", x);
    return 0;
}