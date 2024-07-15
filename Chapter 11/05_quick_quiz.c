#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));
    ptr[0] = 12;
    printf("%.2f\n", ptr[0]);
    free(ptr);
    printf("%.2f\n", ptr[0]);
    return 0;
}