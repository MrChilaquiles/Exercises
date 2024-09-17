#include <stdio.h>
#define dim 10
void registro(int tamA, int tamB, float mat[dim][dim]){
    for (int i = 0; i < tamA; i++) {
        for (int j = 0; j < tamB; j++) {
            printf("Ingrese el valor para la posicion %d, %d: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
}

void procedimiento(int tam, float matA[dim][dim], float matB[dim][dim], int opcP) {
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            if (opcP == 1) {
                matA[i][j] += matB[i][j];
            } else if (opcP == 2) {
                matA[i][j] -= matB[i][j];
            } else {
                matA[i][j] *= opcP;
            }
        }
    }
}

void resultado(int tamA, int tamB, float mat[dim][dim]) {
    for (int i = 0; i < tamA; i++) {
        for (int j = 0; j < tamB; j++) {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int tamM, tamM1, tamN, tamN1, kEsc = 0, opc = 1, opcP;
    float matA[dim][dim], matB[dim][dim], matC[dim][dim];
    while(opc != 0) {
        printf("Selecciona una opcion: \n1.- Suma de matrices\n2.- Resta de matrices\n3.- Multiplicacion por escalar\n4.- Multiplicacion de matrices\n0.- Salir\nOpcion: ");
        scanf("%d", &opc);
        switch (opc) {
        case 1:
            printf("\nIngrese un tamano n (0 < n < 10) para la matriz: ");
            scanf("%d", &tamM);
            if (tamM > 0 && tamM < 10) {
                printf("A continuacion ingrese los valores para la matriz A\n");
                registro(tamM, tamM, matA);
                printf("A continuacion ingrese los valores para la matriz B\n");
                registro(tamM, tamM, matB);
                procedimiento(tamM, matA, matB, 1);
                resultado(tamM, tamM, matA);
            } else {
                printf("Ingrese un tamano valido\n");
            }
            break;
        case 2:
            printf("\nIngrese un tamano n (0 < n < 10) para la matriz: ");
            scanf("%d", &tamM);
            if (tamM > 0 && tamM < 10) {
                printf("A continuacion ingrese los valores para la matriz A\n");
                registro(tamM, tamM, matA);
                printf("A continuacion ingrese los valores para la matriz B\n");
                registro(tamM, tamM, matB);
                procedimiento(tamM, matA, matB, 2);
                resultado(tamM, tamM, matA);
            } else {
                printf("Ingrese un tamano valido\n");
            }
            break;
        case 3:
            printf("\nIngrese un tamano n (0 < n < 10) para la matriz: ");
            scanf("%d", &tamM);
            if (tamM > 0 && tamM < 10) {
                printf("A continuacion ingrese los valores para la matriz\n");
                registro(tamM, tamM, matA);
                printf("\nIngrese el valor del escalar: ");
                scanf("%d", &kEsc);
                procedimiento(tamM, matA, matA, kEsc);
                resultado(tamM, tamM, matA);
            } else {
                printf("Ingrese un tamano valido\n");
            }
            break;
        case 4:
            printf("Gracias!! nos vemos luego :)");
            break;
        case 0:
            
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;
        }
    }
}