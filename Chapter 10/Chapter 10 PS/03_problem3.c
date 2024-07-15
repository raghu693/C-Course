#include <stdio.h>

int main(){
     FILE *rptr, *wptr;
     char ch;

     rptr = fopen("sample.txt", "r");
     wptr = fopen("03_problem3.txt", "w");

     while (1)
     {
        /* code */
        ch = fgetc(rptr);

        if (ch == EOF){
            /* code */
            break;
        }
        fprintf(wptr, "%c", ch);
        fprintf(wptr, "%c", ch);
        
     }
     

    return 0;
}