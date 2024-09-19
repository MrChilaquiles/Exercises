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
            if (opcP == 0) {
                matA[i][j] += matB[i][j];
            } else if (opcP == 1) {
                matA[i][j] -= matB[i][j];
            } else {
                matA[i][j] *= opcP;
            }
        }
    }
}
void multMatrices(int tamA, int tamB, int tamC, float matA[dim][dim], float matB[dim][dim], float matC[dim][dim]){
    for (int i = 0; i < tamA; i++) {
        for (int j = 0; j < tamC; j++) {
            matC[i][j] = 0;
            for (int k = 0; k < tamB; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
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
    int tamM, tamM1, tamN, tamN1, kEsc = 0, opc = 1;
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
                procedimiento(tamM, matA, matB, 0);
                printf("Resultado de la suma: \n");
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
                procedimiento(tamM, matA, matB, 1);
                printf("Resultado de la resta: \n");
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
                printf("Resultado de la multiplicacion por escalar: \n");
                resultado(tamM, tamM, matA);
            } else {
                printf("Ingrese un tamano valido\n");
            }
            break;
        case 4:
            printf("Ingrese un tamano n (0 < n < 10) para la fila de la matriz A: ");
            scanf("%d", &tamM);
            printf("Ingrese un tamano n (0 < n < 10) para la columna de la matriz A: ");
            scanf("%d", &tamM1);
            printf("Ingrese un tamano n (0 < n < 10) para la fila de la matriz B: ");
            scanf("%d", &tamN);
            printf("Ingrese un tamano n (0 < n < 10) para la columna de la matriz B: ");
            scanf("%d", &tamN1);
            if ((tamM > 0 && tamM < 10) && (tamM1 > 0 && tamM1 < 10) && (tamN > 0 && tamN < 10) && (tamN1 > 0 && tamN1 < 10)) {
                if (tamM1 == tamN) {
                    printf("Multiplicacion A*B\nA continuacion ingrese los valores para la matriz A\n");
                    registro(tamM, tamM1, matA);
                    printf("A continuacion ingrese los valores para la matriz B\n");
                    registro(tamN, tamN1, matB);
                    multMatrices(tamM, tamN, tamN1, matA, matB, matC);
                    printf("Resultado de la multiplicacion de A*B: \n");
                    resultado(tamM, tamN1, matC);
                } else if (tamN1 == tamM) {
                    printf("Multiplicacion B*A\nA continuacion ingrese los valores para la matriz A\n");
                    registro(tamM, tamM1, matA);
                    printf("A continuacion ingrese los valores para la matriz B\n");
                    registro(tamN, tamN1, matB);
                    multMatrices(tamN, tamM, tamM1, matB, matA, matC);
                    printf("Resultado de la multiplicacion de B*A: \n");
                    resultado(tamN, tamM1, matC);
                } else {
                    printf("No se puede realizar una multiplicacion de matrices con las dimensiones introducidas\n");
                }
            } else {
                printf("Ingrese un tamano valido\n");
            }
            break;
        case 0:
            printf("Gracias!! nos vemos luego :)");
            break;
        default:
            printf("Ingrese una opcion valida\n");
            break;
        }
    }
}