#include <stdio.h>
#include <string.h>
int main() {
    char sym[]="aeiouy";
    int num[6]={0};
    char txt[10000]={'\0'};
    char*a=txt;
    gets_s(a,10000);
    while(a[0]!='\0'){
        for (int i=0;i<strlen(a);i++){
            for (int j=0;j<5;++j){
                if (a[i]-sym[j]==0){
                    num[j]++;
                    break;
                }
            }
        }
        gets_s(a,10000);
    }
    int mmin,id;
    mmin=id=1e9;
    for (int i=0;i<6;++i){
        if (num[i]<mmin){
            mmin=num[i];
            id=i;
        }
    }
    printf("the rarest vowel - %c\n",sym[id]);
    return 0;
}
