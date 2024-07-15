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

void strCpy(char target[], char source[]){
    for (int i = 0; i < strLen(source); i++){
        /* code */
        target[i] = source[i];
    }
    target[strLen(source)] = '\0';
}

int main(){
    char str[] = "Raghav";
    char target[30];
    strCpy(target, str);
    printf("%s %s", target, str);

    return 0;
}