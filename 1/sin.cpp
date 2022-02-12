#include <stdio.h>
#include <math.h>
int main(){
    double y;
    int m, x;
    for (y = 1; y >= 0; y -= 0.1) {
        m = asin(y) * 10;
        for (x = 1; x < m; x++)
            printf(" ");
        printf("*");
        for (; x < 31 - m; x++)
            printf(" ");
        printf("*\n");
    }
    for (y = 0; y <= 1; y += 0.1) {
        m = 31 + asin(y) * 10;
        for (x = 1; x < m; x++)
            printf(" ");
        printf("  *");
        for (; x < 93 - m; x++)
            printf(" ");
        printf(" *\n");
    }
}
