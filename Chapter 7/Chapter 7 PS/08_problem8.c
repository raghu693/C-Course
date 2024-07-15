#include <stdio.h>

int main(){
    // int arr[3][10] = {
    //     {1, 2, 3, 4, 5, 6, 6, 7, 8, 9},
    //     {1, 2, 3, 4, 5, 6, 6, 7, 8, 9},
    //     {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
    // };

    int arr[3][10];
    int table_of[3];

    printf("Enter Three Numbers Of which you want Multiplication Table: ");
    scanf("%d %d %d", &table_of[0], &table_of[1], &table_of[2]);

    for (int i = 0; i < 3; i++){
        /* code */
        for (int j = 0; j < 10; j++){
            /* code */
            arr[i][j] = table_of[i]*(j+1);
            arr[i][j] = table_of[i]*(j+1);
            arr[i][j] = table_of[i]*(j+1);
        }
        
    }

    for (int i = 0; i < 3; i++){
        /* code */
        for (int j = 0; j < 10; j++){
            /* code */
            printf("%d X %d = %d\n", table_of[i], j+1, (table_of[0]) * (j+1));
        }
        printf("\n\n");
    }

    return 0;
}