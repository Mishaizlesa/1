#include <stdio.h>
int main() {
    int n;
    double a;
    printf("n = ");scanf_s("%d",&n);
    printf("a = ");scanf_s("%lf",&a);
    double y=1/a;
    double prev=a;
    for (double i=2;i<=n+1;++i){
        prev*=(prev+1);
        y+=(i/prev);
    }
    printf("y = %lf\n",y);
    return 0;
}
