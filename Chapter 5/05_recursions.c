#include <stdio.h>

int fac(int n){
    if (n == 1 || n == 0){
        /* code */
        return 1;
    }
    
    return n * (fac(n-1));
}

/*

This will Evaluates to this:-

3 * fac(2)
2 * fac(1)
=> 6

*/

int main(){
    int a = fac(3);
    printf("%d\n", a);
    return 0;
}