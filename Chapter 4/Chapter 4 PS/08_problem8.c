#include <stdio.h>

int main(){
    /*
    
    fac(5) = 5 X 4 X 3 X 2 X 1

    fac(n) = n X n - 1 X n - 2 X n - 3 X ...... 2 X 1  

    fac(5) = 1 X 2 X 3 X 4 X 5 = 120

    For Example:

    fac(5) = 120
    => 1
    => 2
    => 6
    => 24
    => 120
    */

    int product = 1, fac_of = 5;

    for (int i = 1; i <= fac_of; i++){    
        product *= i; // product = product * i; 
    }
        printf("%d\n", product);
    

    return 0;
}