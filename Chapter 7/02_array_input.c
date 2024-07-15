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
        printf("Student%d Marks are: %d\n", j + 1, marks[j]);
    }
    return 0;
}