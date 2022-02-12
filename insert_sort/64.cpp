#include <stdio.h>
int main(){
    int n;
    printf("number of elems - ");scanf_s("%d",&n);
    int arr[10000];
    for (int i=0;i<n;i++){
        printf("%d elem - ",i+1);scanf_s("%d",&arr[i]);
    }
    int col[200000]={0};
    int mmax=-1,max_id=-1;
    for (int i=0;i<n;++i){
        col[arr[i]]++;
        if (col[arr[i]]>mmax){
            mmax=col[arr[i]];
            max_id=arr[i];
        }
    }
    printf("%d is most common number\n",max_id);
}
