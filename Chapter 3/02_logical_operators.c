#include <stdio.h>

int main()
{

    // Just For Knowledge 
    // 0 = False
    // 1 = True

    printf("\n0 for False\n");
    printf("1 for True\n\n");

    // Truth Table of 'OR'
    printf("True or False is %d\n", 1 || 0);
    printf("True or True is %d\n", 1 || 1);
    printf("False or True is %d\n", 0 || 1);
    printf("False or False is %d\n", 0 || 0);
    printf("\n");

    // Truth Table of 'AND'
    printf("True and False is %d\n", 1 && 0);
    printf("True and True is %d\n", 1 && 1);
    printf("False and True is %d\n", 0 && 1);
    printf("False and False is %d\n\n", 0 && 0);

    // About 'Not' Operator
    int result = 1 > 10;
    printf("%d\n", result); // Returns False for the above Equation
    printf("%d\n", !(result)); // Returns True for the above Equation
    return 0;
}