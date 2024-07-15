#include <stdio.h>

int reverseArr(int *i, int);

int reverseArr(int *arr, int n){
    int temp;
    for (int i = 0; i < n/2; i++){
        /* code */
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    
}

int printArr(int *a, int);

int printArr(int *arr, int n){
    for (int i = 0; i < n; i++){
        /* code */
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printArr(arr, 8);
    reverseArr(arr, 8);
    printArr(arr, 8);
    return 0;
}