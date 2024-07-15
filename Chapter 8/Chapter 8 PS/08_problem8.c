#include <stdio.h>
#include <string.h>


int main(){
    char str[30] = "Raghav";
    int count = 0;
    for (int i = 0; i < strlen(str); i++){
        /* code */
        if(str[i] == 'a'){
            count++;
        }
        continue;
    }
    printf("a is the Occuring %d times in the word %s\n", count, str);
    
    return 0;
}