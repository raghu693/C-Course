#include <stdio.h>

int sum(int);

int sum(int a){
    if (a == 1){
        /* code */
        return 1;
    }
    
    return (a) + sum(a-1);
}

/*

10 + 9 
9 + 8
8 + 7
7 + 6
6 + 5
5 + 4
4 + 3
3 + 2
2 + 1
1 + 1

=> 55

*/

int main(){
    // 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
    int a = sum(10);
    printf("%d\n", a);
    return 0;
}