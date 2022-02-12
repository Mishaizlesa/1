#include <stdio.h>
#include <ctype.h>
int main() {
    char gl[]="aeiouy";
    char a[10000];
    char* txt=a;
    int kol[26]={0};
    int mmax=0;
    int char_m='\0';
    while(1){
        gets_s(txt,10000);
        if (txt[0]=='\0') break;
        for (int i=0;txt[i];i++){
            for (int j=0;j<6;++j){
                if (tolower(txt[i])==gl[j]){
                    kol[tolower(txt[i])-'a']++;
                    if (kol[tolower(txt[i])-'a']>mmax) {
                        mmax=kol[tolower(txt[i])-'a'];
                        char_m=tolower(txt[i]);
                    }
                }
            }
        }
    }
    printf("%c - most common vowen letter\n",char_m);
    return 0;
}
