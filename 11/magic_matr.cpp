#include <stdio.h>
int main() {
    int n=4;
    FILE* input=NULL;
    input=fopen("/Users/mihailkozlov/Desktop/input_1.txt", "r");
    int a[4][4];
    int sumr[4];
    int sumc[4];
    int diag1=0;
    int diag2=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            fscanf(input,"%d",&a[i][j]);
            sumr[i]+=a[i][j];
            sumc[j]+=a[i][j];
            if (i==j) diag1+=a[i][j];
            if (i==n-j-1) diag2+=a[i][j];
        }
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (sumr[i]!=sumr[j]){
                printf("not magic\n");
                return 0;
            }
        }
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (sumc[i]!=sumc[j]){
                printf("not magic\n");
                return 0;
            }
        }
    }
    if (sumr[0]!=sumc[0] || diag2!=diag1){
        printf("not magic\n");
        return 0;
    }
    if (sumr[0]!=diag2){
        printf("not magic\n");
        return 0;
    }
    printf("matrix is magic\n");
    return 0;
}
