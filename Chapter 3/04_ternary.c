#include <stdio.h>

int main(){
    // condition ? expression-if-true : expression-if-false
    // Here "?" and ":" are called Ternary Operators
    int a = 32;
    int b = 45;
    a>b ? printf("A is greater") : printf("B is Greater");
    return 0;
}