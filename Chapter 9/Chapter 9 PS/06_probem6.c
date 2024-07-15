#include <stdio.h>

typedef struct ComplexNo{
    int real;
    int imaginary;
} Complex;

void display(Complex c){
    printf("%d + %di\n", c.real, c.imaginary);

}
int main(){
    Complex carr[5];

    for (int i = 0; i < 5; i++){
        printf("Enter Real Part: \n");
        scanf("%d", &carr[i].real);
        printf("Enter Imaginary Part: \n");
        scanf("%d", &carr[i].imaginary);
        printf("\n");
        display(carr[i]);
    }

    return 0;
}