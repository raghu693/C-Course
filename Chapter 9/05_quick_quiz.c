#include <stdio.h>

struct employee{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee); // Function Prototype

void show(struct employee e){
    printf("Code is %d\nSalary is %.2f\nName is %s\n", e.code, e.salary, e.name);
}

int main(){
    struct employee e1 = {12, 12.112, "Raghav"};
    show(e1);
    return 0;
}