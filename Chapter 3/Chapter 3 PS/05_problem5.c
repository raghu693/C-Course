#include <stdio.h>

int main(){
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);

    if ((int) ch >= 97 && (int) ch <= 122){
        /* code */
        printf("Character is LowerCase");
    }else{
        printf("Character is Not LowerCase");
    }
    
    return 0;
}