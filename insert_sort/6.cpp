#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void printArray(int A[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main(){
    int arr_size;
    printf("number of elems - ");scanf_s("%d",&arr_size);
    int arr[10000];
    for (int i=0;i<arr_size;i++){
        printf("%d elem - ",i+1);scanf_s("%d",&arr[i]);
    }
    printf("Given array is \n");
    printArray(arr, arr_size);

    insertionSort(arr,arr_size);

    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}
