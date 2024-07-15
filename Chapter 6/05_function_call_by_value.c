#include <stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int main(){
    int x = 2, y = 3; 
    int a = sum(x, y);
    printf("%d\n", a);
    return 0;
}