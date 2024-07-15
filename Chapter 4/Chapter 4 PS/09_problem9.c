#include <stdio.h>

int main(){
    int i = 1, product = 1, fac_of = 8;
    while (i <= fac_of){
        /* code */
        product *= i; // product = product * i; 
        i++;
    }

    printf("%d\n", product);

    
    return 0;
}