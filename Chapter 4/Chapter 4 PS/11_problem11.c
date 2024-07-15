#include <stdio.h>

int main(){
    int number = 61;
    int prime = 0;
    int i = 2;
    while (i<number){
        /* code */
        if (number % i == 0){
            /* code */
            prime = 1;
            break;
        }
        i++;
    }

    if (prime){
        /* code */
        printf("Number is not prime");
    }else{
        printf("Number is Prime");
    }
    
    
    return 0;
}