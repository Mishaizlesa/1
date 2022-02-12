#include <stdio.h>
int main() {
    FILE* output=NULL;
    //fopen_s(&output,'твой файл','w');
    char txt[10000]={'\0'};
    char*a=txt;
    gets_s(a,10000);
    while(a[0]!='\0'){
        fprintf(output, "%s\n",a);
        gets_s(a,10000);
    }
    fclose(output);
    return 0;
}
