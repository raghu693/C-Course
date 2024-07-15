#include <stdio.h>

typedef struct ComplexNo{
    int real;
    int imaginary;
} Complex;


int main(){
    Complex c = {23, 69};

    printf("%d + %di\n", c.real, c.imaginary);
    return 0;
}