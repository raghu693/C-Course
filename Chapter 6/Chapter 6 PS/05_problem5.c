#include <stdio.h>

int sum_average(int*, int*, int, int);

int sum_average(int* a, int* b, int c, int d){
    *a = d+c;
    *b = (c+d)/2;
}

int main(){
    int sum, average;
    int a = 12, b = 24;
    sum_average(&sum, &average, a, b);
    printf("The Sum of the Number are %d\n", sum);
    printf("The Average of the Number are %d\n", average);
    return 0;
}