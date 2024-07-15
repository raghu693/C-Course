#include <stdio.h>

int main(){
    int year;
    printf("Enter Your Year: ");
    scanf("%f", &year);

    if (year % 4 == 0){
        /* code */
        printf("Year is a Leap Year");
    }else{
        printf("Year is not a Leap Year");
    }

    return 0;
}