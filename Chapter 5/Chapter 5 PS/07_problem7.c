#include <stdio.h>

/*

7. Write a program using function to print the following pattern (first n lines)

*

* * *

* * * * *

*/

int main(){
    int n = 3;
    for (int i = 0; i < n; i++){
        /* code */
        for (int j = 0; j < 2*i+1; j++){
            /* code */
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}