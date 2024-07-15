#include <stdio.h>

int main(){
    int marks;
    printf("Enter the Marks: ");
    scanf("%d", &marks);

    if (marks > 90 && marks <= 100){
        /* code */
        printf("A");
    }else if (marks > 80 && marks <= 90){
        /* code */
        printf("B");
    }else if (marks > 70 && marks <= 80){
        /* code */
        printf("C");
    }else if (marks > 60 && marks <= 70){
        /* code */
        printf("D");
    }else if (marks > 50 && marks <= 60){
        /* code */
        printf("E");
    }else if (marks <= 50){
        /* code */
        printf("F");
    }else{
        printf("Invalid Marks");
    }

    return 0;
}