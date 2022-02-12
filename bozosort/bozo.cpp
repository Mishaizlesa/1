#include <stdio.h>
#include <stdlib.h>
#include <time.h>
bool isSorted(int a[], int n){
    for (int i=n-1;i>0;--i){
        if (a[i]<a[i-1]) return false;
    }
    return true;
}
void shuffle(int a[], int n){
    for (int i = 0; i < n; i++){
        int tmp_num=rand()%n;
        int tmp=a[i];
        a[i]=a[tmp_num];
        a[tmp_num]=tmp;
    }
}
void bogosort(int a[], int n){
    while (!isSorted(a, n))
        shuffle(a, n);
}

void printArray(int a[], int n){
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main(){
    srand(time(NULL));
    int n;
    int a[1000]={0};
    printf("number of elements - ");scanf_s("%d",&n);
    for (int i=0;i<n;++i){
        printf("%d elem ",i+1);scanf_s("%d",&a[i]);
    }
    printf("default array :\n");
    for(int i=0;i<n;++i) printf("%d ",a[i]);
    bogosort(a, n);
    printf("\nSorted array :\n");
    printArray(a, n);
    return 0;
}

