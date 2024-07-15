#include <stdio.h>

int main(){
    int marks[] = {12, 24, 36, 48};

    // Both Pointers are same
    // int *ptr = &marks[0];
    int *ptr = marks;
    for (int i = 0; i < 4; i++){
        /* code */
        printf("The Value at index %d is %d\n", i, *ptr);
        ptr++;
    }
    
    return 0;
}