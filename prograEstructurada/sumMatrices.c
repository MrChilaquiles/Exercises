#include <stdio.h>
#include <stdlib.h>

int main() {
    int matA[3][3], matB[3][3], matC[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matA[i][j] = rand() % 100;
            matB[i][j] = rand() % 100;
        }
    }
    
    printf("Matriz A\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz B\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }

    printf("\nSuma de matriz\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }
    
    return 8;
}