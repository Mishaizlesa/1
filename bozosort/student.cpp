#include <stdio.h>
struct stud{
    char* name;
    char* surname;
    char* patr;
    int num;
    int fst;
    int sec;
    int th;
    int frth;
    int fvth;
};
int main() {
    FILE* input=NULL;
    FILE* output=NULL;
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    char name[100][100];
    char surname[100][100];
    char patr[100][100];
    int n=0;
    stud arr[100];
    while (!feof(input)){
        fscanf(input, "%s %s %s %d %d %d %d %d %d",name[n],surname[n],patr[n],&arr[n].num,&arr[n].fst,&arr[n].sec,&arr[n].th,&arr[n].frth,&arr[n].fvth);
        n++;
    }
    for (int i=0;i<n;++i){
        arr[i].name=name[i];
        arr[i].surname=surname[i];
        arr[i].patr=patr[i];
    }
    stud g_marks[100];
    int cnt=0;
    for (int i=0;i<n;++i){
        if (arr[i].fst>3 && arr[i].sec>3 && arr[i].th && arr[i].frth>3 && arr[i].fvth>3) {
            g_marks[cnt]=arr[i];
            cnt++;
        }
    }
    for (int i=0; i<cnt; i++){
        for (int j=0; j<cnt-1; j++){
            if (g_marks[j].surname<g_marks[j+1].surname){
                stud tmp=g_marks[j];
                g_marks[j]=g_marks[j+1];
                g_marks[j+1]=tmp;
            }
        }
    }
    printf("список отличников и хорошистов:\n");
    for (int i=0;i<cnt;i++){
        fprintf(output, "%s %s %s %d %d %d %d %d %d\n",g_marks[i].name,g_marks[i].surname,g_marks[i].patr,g_marks[i].num,g_marks[i].fst,g_marks[i].sec,g_marks[i].th,g_marks[i].frth,g_marks[i].fvth);
        printf("%s %s %s %d %d %d %d %d %d\n",g_marks[i].name,g_marks[i].surname,g_marks[i].patr,g_marks[i].num,g_marks[i].fst,g_marks[i].sec,g_marks[i].th,g_marks[i].frth,g_marks[i].fvth);
    }
    return 0;
}
