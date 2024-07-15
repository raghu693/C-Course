#include <stdio.h>

int main(){
    // Prime or Not prime

    int number = 61;
    int prime = 1; // Assume number is prime
    for (int i = 2; i < number; i++){
        if (number % i == 0){
            prime = 0; // Number is not prime
            break;
        }
    }
    
    if (prime == 1){
        printf("Number is Prime\n");
    }else{
        printf("Number is Not Prime\n");
    }

    return 0;
}
