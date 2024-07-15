#include <stdio.h>

int sum(int x, int y){
    return x + y;
}

int main(){ 
    int a1 = sum(12, 3);
    printf("The Value of a + b is %d\n", a1);

    int a2 = sum(6, 9);
    printf("The Value of a + b is %d\n", a2);

    int a3 = sum(69, 69);
    printf("The Value of a + b is %d\n", a3);
    return 0;
}