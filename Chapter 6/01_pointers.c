#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is pointer pointing to i (j is an integer pointer)
    int k = 69;
    printf("the Address of i is %p\n", &i);
    printf("the Address of i is %p\n", j);
    printf("the Address of k is %p\n", &k);

    // Both are same
    printf("The value at address %p is %d\n", j, *&i);
    printf("The value at address %p is %d\n", j, *j);

    // Both are different
    printf("The value at address %p\n", *&i);
    printf("The value at address %p\n", *&j);

    return 0;
}