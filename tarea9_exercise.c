#include <stdio.h>
#include <conio.h>
int main() {
    int vec[5] = {3,1,6,4,5}, mat[3][4];
    for (int i=0; i<3; i++) {
        for (int j=0; j<4; j++) {
            mat [i][j] = vec[i] + vec[j] + j;
        }
    }
    for (int i=0; i<2; i++) {
        int j=1;
        while (j<5) {
            printf("%d\n", mat[i+1][j-1]);
            j+=2;
        }
    }
    getch();
    return 8;
}