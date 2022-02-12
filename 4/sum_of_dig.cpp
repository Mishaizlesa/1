#include <stdio.h>
int main() {
    char a[1000]={'\0'};
    scanf_s("%s",a);
    int res=0;
    for (int i=0;i<1000 && a[i]!='\0';++i){
        res+=(a[i]-'0');
    }
    printf("sum of digits = %d",res);
    return 0;
}
