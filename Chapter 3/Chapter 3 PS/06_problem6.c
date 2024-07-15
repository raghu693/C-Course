#include <stdio.h>

int main(){
    int a1, a2, a3, a4;
    printf("Enter Number 1: ");
    scanf("%d", &a1);
    printf("Enter Number 2: ");
    scanf("%d", &a2);
    printf("Enter Number 3: ");
    scanf("%d", &a3);
    printf("Enter Number 4: ");
    scanf("%d", &a4);

    if (a1 > a2 && a1 > a3 && a1 > a4){
        /* code */
        printf("Number 1 is The greatest");
    }else if (a2 > a1 && a2 > a3 && a2 > a4){
        /* code */
        printf("Number 2 is The greatest");
    }else if (a3 > a2 && a3 > a1 && a3 > a4){
        /* code */
        printf("Number 3 is The greatest");
    }else if (a4 > a1 && a4 > a3 && a4 > a2){
        /* code */
        printf("Number 4 is The greatest");
    }else{
        printf("Gretest Numbers are Equal");
    }
    
    return 0;
}