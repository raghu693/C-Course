#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry1.txt", "a");

    int num = 456;
    fprintf(ptr, "%d\n", num);
        
    return 0;
}