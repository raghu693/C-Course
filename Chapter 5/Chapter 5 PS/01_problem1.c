#include <stdio.h>

float average(float, float, float);

float average(float a, float b, float c){
    return (a + b + c)/3; 
}

int main(){
    // 1. Write a program using function to find average of three numbers.
    float a = average(87, 67, 3);
    printf("%.2f\n", a);
    return 0;
}