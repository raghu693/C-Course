#include <stdio.h>

int change(int a);

int change(int a){
    a = 77; // Misnomer
    return 0;
}

int main(){
    int a = 12;
    change(a);
    printf("A is %d\n", a);
    return 0;
}
