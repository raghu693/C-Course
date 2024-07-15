#include <stdio.h>

int main(){
    int table_of;
    printf("Enter the Number of Which You want Multiplication Table: \n");
    scanf("%d", &table_of);

    FILE *ptr;

     ptr = fopen("Table.txt", "w");

    for (int i = 1; i <= 10; i++){
        fprintf(ptr, "%d X %d = %d\n", table_of, i, table_of*i);
    }
    return 0;
}