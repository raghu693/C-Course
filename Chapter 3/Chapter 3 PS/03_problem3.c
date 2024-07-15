#include <stdio.h>

int main(){
    float salary;
    printf("Enter Your Salary: ");
    scanf("%f", &salary);

    if (salary > 250000 && salary < 500000){
        /* code */
        printf("5%% tax will apply on You\n");
        printf("The Tax applied on your salary is %f\n", (salary) * 0.05);
    }
    


    return 0;
}