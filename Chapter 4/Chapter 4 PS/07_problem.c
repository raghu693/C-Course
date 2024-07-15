#include <stdio.h>

int main(){
    int product, sum = 0;
    for (int i = 1; i <= 10; i++){
        /* code */
        product = 8*i;
        sum += product;
    }

    printf("%d\n", sum);
    
    return 0;
}