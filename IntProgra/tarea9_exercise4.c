#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15

int main() {
    int x[MAX][MAX], n;
    srand(time(NULL)); 
    printf("Dame el total de filas o columnas: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            x[i][j] = rand()%11;
        }
    }
    for (int i=0; i<n; i++) {
        printf("%d ", x[i][i]);
    }
    getch();
    return 0;
}