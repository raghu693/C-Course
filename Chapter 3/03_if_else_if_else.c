#include <stdio.h>

int main(){
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    if (age >= 18 && age < 90){
        /* code */
        printf("You can Drive");
    }else if (age >= 90){
        /* code */
        printf("Dada Ji, You Cannot Drive Since you are Above 90\n");
    }else{
        /* code */
        printf("You Cannot Drive");
    }
    return 0;
}