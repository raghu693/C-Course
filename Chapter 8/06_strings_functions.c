#include <stdio.h>
#include <string.h>

int main(){
    // Using StrLen function
    char st[] = "HarryisaGoodBoy";
    // printf("The length of %s is %d\n\n", st, strlen(st));

    // Using Strcpy function
    char source[90] = "SourceSTR";
    char target[10];
    strcpy(target, source);
    // printf("%s\n", target);
    // printf("%s\n", source);

    // Using StrCat function
    strcat(st, source);
    // printf("%s", st);

    // Using StrCmp function
    int a = strcmp("~Joke", "zoke");
    // printf("%d\n", a);

    return 0;
}