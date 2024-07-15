#include <stdio.h>

int main(){
    int counter = 1;
    int sum = 0;
    while (counter <= 10){
        /* code */
        sum += counter;
        counter++;
    }
    printf("%d\n", sum);
    return 0;
}