#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry2.txt", "r");

    int num;
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    fscanf(ptr, "%d", &num);
    printf("%d\n", num);
    return 0;
}