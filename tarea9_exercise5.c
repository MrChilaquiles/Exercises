#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int mat[10][10], tam = 0, suma = 0, prom = 0, moda = 0, maxVal = 0, maxCount = 0, i, j, k, l;
    srand(time(NULL));
    printf("Ingrese el tamano de la matriz: ");
    scanf("%d", &tam);
    for (i=0; i<tam; i++) {
        int count = 0;
        for (j=0; j<tam; j++) {
            mat[i][j] = rand()%11;
            suma += mat[i][j];
        }
    }
    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            int count = 0;
            for (k=0; k<tam; k++) {
                for (l=0; l<tam; l++) {
                    if (mat[k][l] == mat[i][j]) {
                        count ++;
                    }
                }
            }
            if (count > maxCount) {
                maxCount = count;
                maxVal = mat[i][j];
            }
        }
    }
    prom = suma/pow(tam, 2);
    printf("Dada la siguiente matriz: \n");
    for (i=0; i<tam; i++) {
        for (j=0; j<tam; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("Se obtuvieron los siguientes resultados: \na) Suma de todos los elementos: %d\nb) Promedio de los elementos: %d\nc) Elemento que mas se repite: %d\n", suma, prom, maxVal);
    getch();
    return 8;
}