#include <stdio.h>
int main() {
    int n,m;
    int sum[100];
    int a[100][100];
    printf("n - ");scanf_s("%d",&n);
    printf("m - ");scanf_s("%d",&m);
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            scanf("%d",&a[i][j]);
            if (j%2) sum[j]+=a[i][j];
        }
    }
    for (int i=1;i<m;i+=2){
        printf("sum of %d column = %d\n",i+1,sum[i]);
    }
    return 0;
}
