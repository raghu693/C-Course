#include <stdio.h>

int main(){
    int table[10];
    int table_of;
    printf("Enter the Number of which you want the Table: ");
    scanf("%d", &table_of);
    for (int i = 0; i < 10; i++){
        /* code */
        table[i] = table_of*(i+1);
        
    }

    for (int i = 0; i < 10; i++){
        /* code */
        printf("%d X %d = %d\n", table_of, i+1, table[i]);
    }
    
    
    return 0;
}