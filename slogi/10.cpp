#include<stdio.h>
#include<string.h>
long d=256;
int q = 65173;
void search(char pat[], char txt[],long cnt){
    long M = strlen(pat);
    long N = strlen(txt);
    long i, j;
    long p = 0;
    long t = 0;
    long h = 1;
    for (i = 0; i < M-1; i++) h = (h*d)%q;
    for (i = 0; i < M; i++){
        p = ((d*p)%q + pat[i]%q)%q;
        t = ((d*t)%q + txt[i]%q)%q;
    }
    for (i = 0; i <= N - M; i++){
        if ( p == t ){
            for (j = 0; j < M; j++){
                if (txt[i+j] != pat[j])
                    break;
            }
            if (j == M)
                printf("Pattern found at index %ld of %ld row \n", i,cnt);
        }
        if ( i < N-M ){
            t = (d*(t - txt[i]*h) + txt[i+M])%q;
            if (t < 0)
            t = (t + q);
        }
    }
}
int main(){
    FILE* input=NULL;
    input=fopen("/Users/mihailkozlov/Downloads/voyna_i_mir.txt","r");
    char p[100000];
    char *pat=p;
    printf("pattern: ");gets(pat);
    char t[100000];
    char *txt=t;
    long cnt=1;
    while(!feof(input)){
        fgets(txt, 100000, input);
        search(pat, txt,cnt);
        cnt++;
    }
    return 0;
}
