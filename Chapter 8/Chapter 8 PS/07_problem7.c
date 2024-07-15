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
    char str[80] = "BBBBbbbasjyggasuydq"; // Ascii Value of R a g h a v is 82 97 103 104 97 118
    for (int i = 0; i < strLen(str); i++){
        /* code */
        str[i] -= 1;
    }
    printf("%s\n", str);

    // strDecrypt(newStrAscii);

    return 0;
}