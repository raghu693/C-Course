#include <stdio.h>

int ten_times(int*);

int ten_times(int* a){
    *a = *a * 10;
}

int main(){
    int a = 5;
    ten_times(&a);
    printf("%d\n", a);
    return 0;
}