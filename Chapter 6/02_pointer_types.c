#include <stdio.h>

int main(){
    char ch = 'a';
    char *cadd = &ch; // cadd is a character pointer

    float a = 12.1245;
    float* fadd = &a; // fadd is a float pointer

    printf("%p\n", cadd);
    printf("%c\n", *cadd);

    printf("%p\n", fadd);
    printf("%.2f\n", *fadd);
    return 0;
}