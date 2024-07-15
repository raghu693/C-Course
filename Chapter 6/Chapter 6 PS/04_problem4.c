#include <stdio.h>

int ten_times(int*, int*);

int ten_times(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 5;
    int b = 55;
    ten_times(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}