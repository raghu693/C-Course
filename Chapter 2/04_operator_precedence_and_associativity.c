#include <stdio.h>

int main(){
    // 3*x – 8*y is (3x)-(8y) or 3(x-8y)?
    // Priority Operators
    // • 1st is * / %
    // • 2nd is + -
    // • 3rd is =

    // (3x) - (8y)

    // Exmaple:

    int x = 3;
    int y = 4;
    int calc = 3*x - 8*y;
    printf("%d\n", calc);

    // 9 - 32
    // => -23

    // When operators of equal priority are present in an expression, the tie is taken care of by associativity.
    //  x*y/z → (x*y)/z
    //  x/y*z → (x/y)*z
    // *, / follows left to right associativity
    // PRO TIP : Always use parenthesis in case of confusion

    
    return 0;
}