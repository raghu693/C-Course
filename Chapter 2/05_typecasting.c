#include <stdio.h>

int main(){
    int n = 12;
    float m = 124.1212232;
    n = (int) m;
    printf("%d\n", n);

    char ch = 'a';
    int a = (int) ch;
    printf("%d\n", a);

    char cha = 'z';
    int b = (int) cha;
    printf("%d\n", b);
    return 0;
}