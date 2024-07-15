#include <stdio.h>
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

int fibonacci(int);

int fibonacci(int n){
    if (n == 1 || n == 2){
        /* code */
        return n-1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    // 4. Write a program using recursion to calculate nth element of Fibonacci series.
    int a = fibonacci(10); // 34
    printf("%d\n", a);

    return 0;
}