#include <stdio.h>
int main() {
    char a[100]={'\0'};
    scanf_s("%s",a);
    int step=1;
    long ans=0;
    for (int i=99;i>-1;--i){
        if (a[i] && a[i]!='0' && a[i]!='5'){
            ans+=(a[i]-'0')*step;
            step*=10;
        }
    }
    printf("%ld\n",ans);
    return 0;
}
