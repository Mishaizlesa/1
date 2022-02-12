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
int is_sim(int a){
    if (a==1) return 0;
    for (int i=2;i*i<=a;++i){
        if (a%i==0) return 0;
    }
    return 1;
}
int main() {
    FILE* input=NULL;
    FILE* output=NULL;
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    int n;
    fscanf_s(input, "%d",&n);
    int a[10000]={0};
    int simp[10000]={0};
    int simp_cnt=0;
    for (int i=0;i<n;++i){
        fscanf_s(input, "%d",&a[i]);
    }
    for (int i=0;i<n;++i){
        if (is_sim(a[i])) {
            simp[simp_cnt]=a[i];
            simp_cnt++;
        }
    }
    int res=arr_gcd(n, a);
    printf("gcd = %d\n",res);
    printf("lcd = 1\n");
    printf("array a:\n");
    for (int i=0;i<n;++i) printf("%d ",a[i]);
    printf("\nsimple numbers:\n");
    for (int i=0;i<simp_cnt;++i) printf("%d ",simp[i]);
    for (int i=0;i<simp_cnt;++i) fprintf(output,"%d ",simp[i]);
    return 0;
}
