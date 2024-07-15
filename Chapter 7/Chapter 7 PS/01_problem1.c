#include <stdio.h>

int main(){
    int nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = nums;
    printf("The Value at First Element is %d\n", *ptr);
    ptr += 3;
    printf("The Value at Third Element is %d\n", *ptr);

    return 0;
}