#include <stdio.h>
int main() {
    int n;
    scanf_s("%d",&n);
    int a[1000000]={0};
    for (int i=0;i<=n;++i) a[i]=1;
    a[0]=0;
    a[1]=0;
    for(int i=0;i<=n;++i){
        if (a[i]){
            int j=2;
            while (j*i<=n) {
                a[j*i]=0;
                j++;
            }
        }
    }
    for (int i=0;i<=n;++i){
        if (a[i]) printf("%d ",i);
    }
    return 0;
}
