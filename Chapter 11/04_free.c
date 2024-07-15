#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(long));

    // free(ptr);

    
    
    return 0;
}