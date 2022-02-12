#include <stdio.h>
struct country{
    char *name;
    int gold;
    int silver;
    int bronze;
    int over;
    int sum;
};
int main() {
    char n[10][100]={"Austria",
        "Germany",
        "Canada",
        "China",
        "Korea",
        "Norway",
        "Russia",
        "USA",
        "Finland",
        "Japan"};
    country res[10];
    printf("input number of gold, silver and bronze meadals separated by a space:\n");
    for (int i=0; i<10; ++i) {
        res[i].name=n[i];
        printf("%s -> ",res[i].name);scanf_s("%d %d %d",&res[i].gold,&res[i].silver,&res[i].bronze);
        res[i].sum=res[i].gold*7+res[i].silver*6+res[i].bronze*5;
        res[i].over=res[i].gold+res[i].silver+res[i].bronze;
    }
    for (int i=0; i<10; i++){
        for (int j=0; j<9; j++){
            if (res[j].sum<res[j+1].sum){
                country tmp=res[j];
                res[j]=res[j+1];
                res[j+1]=tmp;
            }
        }
    }
    printf("     |   country   | gold | silver | bronze | overall | points |\n");
    for (int i=0;i<10;++i){
        printf("%5d|%13s|%6d|%8d|%8d|%9d|%8d|\n",i+1,res[i].name,res[i].gold,res[i].silver,res[i].bronze,res[i].over,res[i].sum);
        fprintf(output,"%5d|%13s|%6d|%8d|%8d|%9d|%8d|\n",i+1,res[i].name,res[i].gold,res[i].silver,res[i].bronze,res[i].over,res[i].sum);
    }
    return 0;
}
