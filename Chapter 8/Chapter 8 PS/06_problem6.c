#include <stdio.h>

int strLen(char str[]){
    int i = 0, count;
    char c = str[i];
    while (c!='\0'){
        /* code */
        c = str[i];
        i++;
    }
    count = i-1;
    return count;
}

int main(){
    char str[30] = "Raghav";
    for (int i = 0; i < strLen(str); i++){
        /* code */
        str[i] += 1;
    }
    printf("%s\n", str);
    return 0;
}