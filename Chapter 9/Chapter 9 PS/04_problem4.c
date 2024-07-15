#include <stdio.h>

typedef struct Vector2D{
    /* data */
    int i;
    int j;
} V;


int main(){
    V e1 = {12, 4};
    V *ptr = &e1;
    printf("The Vector's first value is %d and the Second Value is %d\n", ptr->i, ptr->j);
    return 0;
}