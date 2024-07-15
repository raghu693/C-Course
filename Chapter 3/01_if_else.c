#include <stdio.h>

int main(){
    // Syntax of If-Else statement

    // if (condition_to_be_checked) {
    // // Statements if condition is true
    // } else {
    // // Statements if condition is false
    // }

    // Example:
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18){
        /* code */
        printf("You can Drive");
    }else{
        /* code */
        printf("You Cannot Drive Since you are %d\n", age);
    }
    
    return 0;
}