#include <stdio.h>

int main(){
    int i = 69;
    int* j = &i;
    printf("The value of i is %d\n", **(&j));
    // **(&j)
    // **&j
    // *j
    // *&i
    // i
    // 69
    return 0;
}