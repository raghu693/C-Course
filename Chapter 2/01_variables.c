#include <stdio.h>

int main(){
    int i = 10;
    int j = i;
    int a, b, c, d;
    a = b = c = d = 30;
    printf("The Value of i is %d\nThe Value of j is %d\n", i, j);
    printf("The Value of a is %d\nThe Value of d is %d\n", a, d);
    printf("The Value of c is %d\nThe Value of d is %d\n", c, d);
    return 0;
}