#include <stdio.h>
#include <string.h>

int main(){
    char input1[30];
    char input2[30];
    scanf("%s", input1);
    fflush(stdin);
    for (int i = 0; i < 6; i++){
        /* code */
        scanf("%c", &input2[i]);
        fflush(stdin);
    }

    printf("%s\n", input1);

    for (int i = 0; i < 5; i++){
        /* code */
        printf("%c", input2[i]);
    }

    printf(" \n");
    

    int a = strcmp(input1, input2);
    printf("%d", a);
    return 0;
}