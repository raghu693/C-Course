#include <stdio.h>

int main(){
     FILE *rptr, *wptr;

     rptr = fopen("integer.txt", "r");

     int num;
     fscanf(rptr, "%d", &num);

     fclose(rptr);
     wptr = fopen("integer.txt", "w");
     fprintf(wptr, "%d", num*2);
     fclose(wptr);
     
    return 0;
}
