#include <stdio.h>

int sum(int*);

int sum(int* a){
    printf("The address of the variable is %d\n", *a);
}

int main(){
    int a = 45;
    int* i = &a;
    sum(&a);
    printf("The address of the variable is %d\n", *i);

    return 0;
}