#include <stdio.h>
#define RFACTOR (1.24733)
void comb_sort(int * array, int size) {//функция, которая сортирует
    int gap = size;
    int swaps = 1;
    int i, j;
    while ( gap > 1 || swaps ) {
        gap = (int)(gap / RFACTOR);
        if ( gap < 1 )
            gap = 1;
        swaps = 0;
        for ( i = 0; i < size - gap; ++i ) {
            j = i + gap;
            if ( array[i] > array[j] ) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
                swaps = 1;
            }
        }
    }
}
int main() {
    int a[10000];
    int n;
    printf("number of elems ");scanf_s("%d",&n);
    for (int i=0;i<n;++i){
        printf("%d elem ",i+1);scanf_s("%d",&a[i]);
    }
    printf("start array: ");
    for (int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    comb_sort(a, n);
    printf("\nsorted array: ");
    for (int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    return 0;
}
