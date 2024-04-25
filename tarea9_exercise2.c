#include <stdio.h>
#include <conio.h>

int main() {
    int a[3][3] = {11,12,31,4,5,16}, c[3][3];
    int b[3] = {7,8,9};
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            c[i][j] = a[j][i] + b[j] + j;
        }
    }
    for (int i=1; i<2; i++) {
        int j=0;
        while (j<3) {
            printf("%d, %d\n", i*b[j], c[i][j]);
            j+=2;
        }
    }
    getch();
    return 8;
}