#include <stdio.h>
int main() {
    FILE* input=NULL;
    FILE* output=NULL;
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    char a[10000]={'\0'};
    char* txt=a;
    int cnt[10]={0}
    while (1){
        for (int i=0;i<10000;i++) a[i]='\0';
        fgets(txt, 10000, input);
        for (int i=0;i<10000 && txt[i];++i){
            if (txt[i]-'0'>-1 && txt[i]-'0'<10) cnt[txt[i]-'0']++;
        }
        if (feof(input)) break;
    }
    for (int i=0;i<10;++i){
        printf("in file contains %d of %d\n",cnt[i],i);
    }
    return 0;
}
