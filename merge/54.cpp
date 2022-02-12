#include <stdio.h>
int main() {
    int n;
    printf("number of elems - ");scanf_s("%d",&n);
    double sum=0,x;
    double mmax=-100000000000,mmin=100000000000;
    for (int i=0;i<n;++i){
        printf("%d elem -> ",i+1);scanf_s("%lf",&x);
        sum+=x;
        if (x>mmax) mmax=x;
        if (x<mmin) mmin=x;
    }
    printf("number of elems = %d\n",n);
    printf("average = %lf\n",sum/n);
    printf("min elem = %lf\n",mmin);
    printf("max elem = %lf\n",mmax);
    return 0;
}
