#include <stdio.h>

int main(){
    int arr[2][3][4];

    for (int i = 0; i < 2; i++){
        /* code */
        for (int j = 0; j < 3; j++){
            /* code */
            for (int k = 0; k < 4; k++){
                /* code */
                printf("%u ", &arr[i][j][k]);
            }
            
        }
        
    }
    
    return 0;
}