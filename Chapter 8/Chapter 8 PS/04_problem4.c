#include <stdio.h>

int slice(char str[], int m, int n){
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return ( int ) str;
}

int main(){
    char str[] = "Raghav";
                                                   

    
    return 0;
}