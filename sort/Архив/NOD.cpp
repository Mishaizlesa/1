#include <stdio.h>
long Nod_ost(long a, long b){
    while (a && b)
        if (a >= b)
           a %= b;
        else
           b %= a;
    return a | b;
}
long Nod_sub(long a, long b){
    while (a && b)
        if (a >= b)
           a -= b;
        else
           b -= a;
    return a | b;
}
int main() {
    long a,b;
    scanf_s("%ld %ld",&a,&b);
    printf("gcd1 - %ld\n",Nod_ost(a, b));
    printf("gcd2 - %ld\n",Nod_sub(a, b));
    return 0;
}
