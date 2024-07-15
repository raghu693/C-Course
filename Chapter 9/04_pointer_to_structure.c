#include <stdio.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important


int main(){
    struct employee *ptr;
    struct employee e1;

    ptr = &e1;
    // We can Update Atrributes using pointer(ptr)
    (*ptr).code = 12;

    // Now we Can print the Attributes using pinter(ptr) By:-
    // printf("%d\n", (*ptr).code); // Gives the same Output   
    // OR
    printf("%d\n", ptr->code); // Gives the same Output '->' is called Arrow Operator


    return 0;
}