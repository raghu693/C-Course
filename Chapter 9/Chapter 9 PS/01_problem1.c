#include <stdio.h>

struct Vector2D{
    /* data */
    int a;
    int b;
};

int main(){
    struct Vector2D v;
    v.a = 12;
    v.b = 23;
    printf("The value of vector is %di + %d j", v.a, v.b); 
    return 0;
}