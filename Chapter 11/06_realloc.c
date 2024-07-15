#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(5 * sizeof(float));
    ptr[0] = 12;
    ptr[1] = 92;
    ptr[2] = 52;
    ptr[3] = 42;
    ptr[4] = 11;
    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n\n", ptr[4]);
    // ptr = realloc (ptr, newsize);

    ptr = realloc (ptr, 10*sizeof(int));
    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    printf("%.2f\n", ptr[5]);
    printf("%.2f\n", ptr[6]);
    printf("%.2f\n", ptr[7]);
    return 0;
}