#include <stdio.h>

typedef struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} employee; // semicolon is important


int main(){
    // typedef int harry;
    // harry a = 88;
    // printf("The Value of a is %d\n", a);

    // typedef struct employee employee;

    employee e1 = {12, 12.12, "Harry"};
    employee *ptr = &e1;
    // printf("The Code is %d\nThe Salary is %.2f\nThe Name is %s\n", e1.code, e1.salary, e1.name);
    printf("The Code is %d\nThe Salary is %.2f\nThe Name is %s\n", ptr->code, ptr->salary, ptr->name);
    return 0;
} 