#include <stdio.h>
#include <string.h>

int main(){
    char str[30] = "Raghzav";
    int present = 0;
    for (int i = 0; i < strlen(str); i++){
        /* code */
        if (str[i] == 'z'){
            /* code */
            present = 1;
            break;
        }
        
    }

    if (present){
        /* code */
        printf("The Character z is present in the string");
    }else{
        printf("The Character z is not present in the string");
    }
    


    
    return 0;
}