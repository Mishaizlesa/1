#include <stdio.h>
int main() {
    FILE* input=NULL;
    FILE* output=NULL;
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    char a[10000]={'\0'};
    char* txt=a;
    while (1){
        for (int i=0;i<10000;i++) a[i]='\0';
        fgets(txt, 10000, input);
        for (int i=0;i<10000 && txt[i];++i){
            if (txt[i]-'a'>-1 && txt[i]-'a'<26){
                int tmp=txt[i]-'a';//если из символа вычесть символ, то получим разность их кодов, буквы идут как в алфавите
                tmp+=1;
                tmp%=26;//если надо зашифровать последнюю букву алфавита, то она будет шифроватьмя первой, 26 - кол-во букв в английском алфавите
                txt[i]='a'+(tmp%26);
            }
        }
        fprintf(output, "%s",txt);
        if (feof(input)) break;
    }
    return 0;
}
