#include <stdio.h>

int count_positive(int *arr, int n){
    int no_of_postives = 0;
    for (int i = 0; i < n; i++){
        /* code */
        if (arr[i]>0){
            no_of_postives++;
        }
        
    }

    return no_of_postives; 
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 69, -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, 12, 34, -3, 435, -45};
    int size = sizeof(arr) / sizeof(arr[0]);
    // 104 / 10
    int a = count_positive(arr, size-1);
    printf("There are %d Posttive Numbers in %d Elements\n", a, size);

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));

    return 0;
}