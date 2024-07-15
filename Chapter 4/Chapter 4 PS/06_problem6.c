#include <stdio.h>

int main(){
    // Common Variables
    int sum = 0;

    // Using For Loops
    // for (int i = 1; i <= 10; i++){
    //     /* code */
    //     sum += i;
    // }

    // printf("%d\n", sum);

    // Using Do-while Loop

    int counter = 1;
    do
    {
        /* code */
        sum += counter;
        counter++;
    } while (counter <= 10);
    
    printf("%d\n", sum);
    
    return 0;
}