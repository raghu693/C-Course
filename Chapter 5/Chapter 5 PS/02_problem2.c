#include <stdio.h>

float c2f(float);

float c2f(float c){
    return (c * 9/5) + 32;
}

int main(){
    // 2. Write a function to convert Celsius temperature into Fahrenheit
    float a = c2f(32);
    printf("%.2f\n", a);
    return 0;
}