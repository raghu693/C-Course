#include <stdio.h>

int main(){
    int table[10];
    int table_of = 5;
    for (int i = 0; i < 10; i++){
        /* code */
        table[i] = table_of*(i+1);
        
    }

    for (int i = 0; i < 10; i++){
        /* code */
        printf("5 X %d = %d\n", i+1, table[i]);
    }
    
    
    return 0;
}