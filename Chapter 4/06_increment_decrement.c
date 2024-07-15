#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5;
    printf("The value of i is %d\n", i);

    // i++;
    // printf("The value of i is %d\n", i++); // Pehle print kare phir increment kare
    printf("The value of i is %d\n", ++i); // Pehle increment kare phir print kare
    return 0;
}