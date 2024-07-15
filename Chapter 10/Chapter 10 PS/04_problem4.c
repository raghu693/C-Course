#include <stdio.h>

int main(){
    int salary1, salary2;
    char name1[30], name2[30];

    printf("Enter name1: \n");
    scanf("%s", name1);

    printf("Enter name2: \n");
    scanf("%s", name2);

    printf("Enter salary of %s: \n", name1);
    scanf("%d", &salary1);

    printf("Enter salary of %s: \n", name2);
    scanf("%d", &salary2);

    FILE *ptr;

    ptr = fopen("Information.txt", "a");

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');

    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);
    fprintf(ptr, "%c", '\n');

    return 0;
}