#include <stdio.h>

typedef struct Vector2D{
    /* data */
    int a;
    int b;
} V;

V sumVector(V a, V b){
    V c = {a.a + b.a, a.b + b.b};
    // printf("The Sum of Vector1 and Vector2 is %d and %d", a.a+a.b, b.a+b.b);
    return c;
}


int main(){
    struct Vector2D v1 = {12, 21}, v2 = {34, 43};

    V v3 = sumVector(v1, v2);
    printf("The value of vector v3 is %d a + %d b\n", v3.a, v3.b);
    return 0;
}