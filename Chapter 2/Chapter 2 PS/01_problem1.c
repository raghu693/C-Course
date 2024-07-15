#include <stdio.h>

int main(){
    int a=1; int b = a; // Valid
    printf("%d\n%d\n", a, b);

    int v = 3*3; // Valid
    printf("%d\n", v);

    // char dt = '21 dec 2020'; // This will throw an Error
    // printf("%c\n", dt);
    return 0;
}