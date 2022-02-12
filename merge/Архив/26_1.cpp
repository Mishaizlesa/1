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
    double avg;
};
int main() {
    FILE* input=NULL;
    //fopen_s(&output,'твой файл','w');
    //fopen_s(&input,'твой файл','r');
    char name[100][100];
    char surname[100][100];
    char patr[100][100];
    int n=0;
    stud arr[100];
    while (!feof(input)){
        fscanf(input, "%s %s %s %d %d %d %d %d %d",name[n],surname[n],patr[n],&arr[n].num,&arr[n].fst,&arr[n].sec,&arr[n].th,&arr[n].frth,&arr[n].fvth);
        arr[n].avg=(double)(arr[n].fst+arr[n].sec+arr[n].th+arr[n].frth+arr[n].fvth)/5.0;
        n++;
    }
    for (int i=0;i<n;++i){
        arr[i].name=name[i];
        arr[i].surname=surname[i];
        arr[i].patr=patr[i];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n-1; j++){
            if (arr[j].avg<arr[j+1].avg){
                stud tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%s %s %s %d %d %d %d %d %d\n",arr[i].name,arr[i].surname,arr[i].patr,arr[i].num,arr[i].fst,arr[i].sec,arr[i].th,arr[i].frth,arr[i].fvth);
    }
    return 0;
}
