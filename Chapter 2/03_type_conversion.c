#include <stdio.h>

int main(){
    // This Code will not work Properly because
    /*
    
    • int and int → int
    • int and float → float
    • float and float → float
    
    */
    int a = 9; // Both operands are int and if i make i of them float it will work properly
    // int b = 2; // Both operands are int and if i make i of them float it will work properly
    float b = 2; // Working Properly 😊
    float divide = a/b; // and int and int returns an int so their is no use of float here
    printf("%f\n", divide);

    // For Exmaple :-
    // • 5/2 becomes 2 as both the operands are int
    // • 5.0/2 becomes 2.5 as one of the operands is float
    // • 2/5 becomes 0 as both the operands are int

    // Important Note :-
    // In programming, type compatibility is crucial. For int a = 3.5;, the float 3.5 is
    // demoted to 3, losing the fractional part because a is an integer. Conversely, for float
    // a = 8;, the integer 8 is promoted to 8.0, matching the float type of a and retaining
    // precision.

    int aa = 3.5; // In this case 3.5 (float) will be demoted to 3 (int) because a is not able to store floats.
    float ab = 8; // a will store 8.0 | 8 -> 8.0 (promotion to float)
    printf("%d\n", aa);
    printf("%f\n", ab);

    return 0;
}