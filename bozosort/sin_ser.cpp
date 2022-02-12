#include <stdio.h>
#include <math.h>
int main() {
    double n;
    printf("n = ");scanf_s("%lf",&n);
    double y=0;
    double prev=0;
    for (double i=1;i<=n;i++){
        prev+=sin(i);
        y+=(i/prev);
    }
    printf("y = %lf\n",y);
    return 0;
}
