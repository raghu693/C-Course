#include <stdio.h>

int main(){
    // Length X Breadth
    // int length = 4, breadth = 5;
    int length, breadth;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the Breadth of the rectangle: ");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d\n", length*breadth);
    return 0;
}