#include <stdio.h>

int main()
{
    // The ‘break’ statement is used to exit the loop irrespective of whether the condition is true or false

    for (int i = 0; i < 1000; i++){
        printf("%d\n", i);
        if (i == 50){
            break;
        }
    }

    return 0;
}