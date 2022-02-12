#include <stdio.h>
int cnt=0;
long cnt2=0;
void perestanovka(int n,int m,int a[]){
    if (m>n) return;
    cnt2++;
    if (a[m]==m) cnt++;
    for (int i=1;i<=n;++i){
        if (i==a[m]){
            for (int i=1;i<=n;++i){
                printf("%d ",a[i]);
            }
            printf("\n");
        }else{
            int tmp;
            tmp=a[i];
            a[i]=a[m];
            a[m]=tmp;
            perestanovka(n, m+1, a);
            tmp=a[i];
            a[i]=a[m];
            a[m]=tmp;
            
        }
    }
}
int main() {
    int n;
    scanf_s("%d",&n);
    int arr[20];
    for (int i=1;i<=n;++i){
        arr[i]=i;
    }
    perestanovka(n, 1, arr);
    printf("number of all perm - %ld\n",cnt2);
    printf("number of perm with matched numbers - %d\n",cnt);
    return 0;
}
