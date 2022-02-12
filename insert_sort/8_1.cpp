#include <stdio.h>
int main() {
    FILE* input=NULL;
    FILE* output=NULL;
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    char a[10000]={'\0'};
    char* txt=a;
    int a1[10000]={0};
    int cnt=0;
    while (1){
        for (int i=0;i<10000;i++) a[i]='\0';
        fgets(txt, 10000, input);
        for (int i=0;i<10000 && txt[i];++i){
            a1[cnt]=txt[i]-'\0';
            cnt++;
        }
        for (int i=0;i<cnt;++i) fprintf(output, "%d",a1[i]);
        if (feof(input)) break;
    }
    return 0;
}
