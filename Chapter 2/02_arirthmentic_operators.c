#include <stdio.h>
#include <math.h>


int main(){
    int a = 45;
    int b = 43;
    int sum = 45+43;
    int substraction = 45-43;
    int product = 45*43;
    int division = 45/43;
    int remainder = 45%43;

    printf("The Sum of 54 and 43 is : %d\n", sum);
    printf("The Substraction of 45 and 43 is : %d\n", substraction);
    printf("The Product of 45 and 43 is : %d\n", product);
    printf("The Division of 45 and 43 is : %d\n", division);
    // Modulus Operator is used to find th Remainder of two numbers when we divide them
    printf("The Remainder when we Divide 45 by 43 is : %d\n", remainder);

    // There is no opertor in C for Exponentiation
    // This is the Wrong Way to do Exponentiation in C It will not return 8 it will return 1
    // int expo = 2^3; // The Tullu(^) is a Bitwise XOR operator
    // printf("%d\n", expo);

    // To do Exponentiation in C Corectly we need to Include a libarary called <Math.h>
    // This is The Wayto do Exponentiation
    int expo = pow(2, 3);
    // Both will Return the Same Output but with different Types
    printf("%d\n", expo); // This Returns an int
    printf("%f\n", pow(2, 3)); // This Returns a Float or a real number 
    return 0;
}