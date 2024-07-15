#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry1.txt", "w");

    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c\n", c);
    fputc('c', ptr);
    return 0;
}