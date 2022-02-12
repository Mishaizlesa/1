#include <iostream>
#include <string>
#include <stdlib.h>
#include "g0.h"
using namespace std;
int main(){
    char**  text;
    text=(char**)malloc(sizeof(char*)*1000);
    for (int i=0;i<1000;++i){
        text[i]=(char*)malloc(sizeof(char)*1000);
        for (int j=0;j<1000;++j) text[i][j]='\0';
    }
    cout<<"input text: "<<endl;
    gets(text[0]);
    for(int i=1;i<1000 && text[i-1][0] && text[i]!=nullptr;i++){
        gets(text[i]);
   }
    char suffix[1000]={'\0'};
    cout<<"input suffix: "<<endl;
    gets(suffix);
    if (max_suff(text,suffix)!=NULL) printf("string with most common suffix - %s\n",max_suff(text, suffix));
    else cout<<"row is undefined"<<endl;
}
