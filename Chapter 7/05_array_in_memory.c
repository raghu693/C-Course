#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter The Marks of 5 Students: ");

    for (int i = 0; i < 5; i++){
        /* code */
        scanf("%d", &marks[i]);
    }

    for (int j = 0; j < 5; j++){
        /* code */
        printf("The Address of Marks at Index %d is: %u\n", j, &marks[j]);
    }
    return 0;
}