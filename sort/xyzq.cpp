#include <stdio.h>
int gcd(int a,int b){
    int c;
    while(b!=0){
        c=a%b;a=b;b=c;
    }
    return a;
}
int arr_gcd(int n,int m[]){
    int i,g;
    if (n<1) return 1;
    g=m[0];
    for (i=1;i<n;++i) g=gcd(g,m[i]);
    return g;
}
long ans(int a[],int st,int fin){
    long res=1;
    for (int i=st;i<=fin;++i) res*=a[i];
    return res;
}
int main(){
    int n;
    scanf_s("%d",&n);
    int a[10000];
    for (int i=1;i<=3*n;++i){
        scanf("%d",&a[i]);
    }
    long x,y,z,q;
    x=ans(a, 1, n);
    y=ans(a,n+1,2*n);
    z=ans(a,2*n+1,3*n);
    q=x*x+y*y+z*z;
    printf("q = %ld\n",q);
    printf("gcd = %d\n",arr_gcd(3*n+1, a));
    printf("lcd = 1\n");
    return 0;
}
