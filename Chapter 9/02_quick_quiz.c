#include <stdio.h>

struct Employee{
    /* data */
    char name[30];
    float salary;
    int code;
};

int main(){

    struct Employee e1, e2, e3;
    printf("Enter Your Name: ");
    scanf("%s", &e1.name);
    
    printf("Enter Your Salary: ");
    scanf("%f", &e1.salary);

    printf("Enter Your Code Number: ");
    scanf("%d", &e1.code);
    printf("\n");


    printf("Enter Your Name: ");
    scanf("%s", &e2.name);
    
    printf("Enter Your Salary: ");
    scanf("%f", &e2.salary);

    printf("Enter Your Code Number: ");
    scanf("%d", &e2.code);
    printf("\n");


    printf("Enter Your Name: ");
    scanf("%s", &e3.name);
    
    printf("Enter Your Salary: ");
    scanf("%f", &e3.salary);

    printf("Enter Your Code Number: ");
    scanf("%d", &e3.code);


    printf("\nDetails of Employee 1: \n");
    printf("Name: %s\n", e1.name);
    printf("Salary: %.2f\n", e1.salary);
    printf("Code: %d\n", e1.code);
    printf("\n");

    printf("\nDetails of Employee 2: \n");
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);
    printf("Code: %d\n", e2.code);
    printf("\n");

    printf("\nDetails of Employee 3: \n");
    printf("Name: %s\n", e3.name);
    printf("Salary: %.2f\n", e3.salary);
    printf("Code: %d\n", e3.code);
    printf("\n");
    
        
    return 0;
}