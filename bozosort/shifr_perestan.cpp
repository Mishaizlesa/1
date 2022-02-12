#include <stdio.h>
FILE* input=NULL;
FILE* output=NULL;
char* encode(long lSize, long * lKey){
    long i, j;
    char line[10000]={'\0'},encstr[10000]={'\0'},text[10000]={'\0'};
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    int cnt=0;
    while(fgets(line,10000,input) && line[0]!='\0'){
        for (int i=0;line[i] && line[i]!='\n';i++){
            text[cnt]=line[i];
            cnt++;
        }
    }
    printf("input text\n%s",text);
    int cnt1=0;
    for(i = 0; i < cnt; i += lSize){
        for(int i=0;line[i];i++) line[i]='\0';
        for(j = 0; j < lSize; j++)
            line[j]= text[i + j];
        for(j = 0; j < lSize; j++){
            encstr[cnt1]= line[lKey[j]];
            cnt1++;
        }
        encstr[cnt1]='\n';cnt1++;
    }
    char *txt=encstr;
    return txt;
}
int main(){
    long lKey[5] = {0};
    long i, lSize= sizeof(lKey)/sizeof(lKey[0]);
    char text[10000];
    char* txt=text;
    printf("Enter key-block : \n");
    for(i = 0; i < lSize; i++){
        printf("KEY[%ld] = ",i+1);
        scanf_s("%ld",&lKey[i]);
    }
    txt = encode(lSize, lKey);
    printf("\nEncoded text:\n%s\n",txt);
    fprintf(output, "%s",txt);
    return 0;
}
