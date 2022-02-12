#include <stdio.h>
int main() {
    char a[10000]={'\0'};
    char*txt=a;
    int mmax=-1;
    int tmp;
    while(1){
        gets_s(txt,10000);
        if (!txt[0]) break;
        tmp=0;
        for (int i=0;txt[i];++i){
            if (txt[i]-'a'<0 || txt[i]-'a'>25){//если симовол не является буквой, то слово окончено
                if (tmp>mmax) mmax=tmp;
                tmp=0;
            }else tmp++;
        }
    }
    printf("max len = %d\n",mmax);
    return 0;
}
