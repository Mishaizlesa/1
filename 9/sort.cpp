#include <stdio.h>
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
    int i=0,tmp;
    while (i < n){
            if (i == 0 || a[i - 1] <= a[i])
                ++i;
            else{
                tmp = a[i];
                a[i] = a[i - 1];
                a[i - 1] = tmp;
                --i;
            }
    }
    printf("sorted array: ");
    for (int i=0;i<n;++i){
        printf("%d ",a[i]);
    }
    return 0;
}
