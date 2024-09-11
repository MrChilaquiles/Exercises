#include <stdio.h>
#define dim 10
int main() {
    int tamM, tamN, tamO, kEsc = 0, opc = 1;
    float matA[dim][dim], matB[dim][dim];
    while (opc != 0) {
        printf("Selecciona una opcion: \n1.- Suma de matrices\n2.- Resta de matrices\n3.- Multiplicacion por escalar\n4.- Multiplicacion de matrices\n0.- Salir\nOpcion: ");
        scanf("%d", &opc);
        switch (opc) {
        case 1:
            printf("\nIngrese el tamano de la matriz: ");
            scanf("%d", &tamM);
            if (tamM > 0 && tamM < 10) {
                for (int i = 0; i < tamM; i++) {
                    for (int j = 0; j < tamM; j++) {
                        printf("Ingrece el valor para la matriz A en la posicion %d, %d: ", i, j);
                        scanf("%f", &matA[i][j]);
                        printf("Ingrece el valor para la matriz B en la posicion %d, %d: ", i, j);
                        scanf("%f", &matB[i][j]);
                        matA[i][j] += matB[i][j];
                    }
                }
                printf("Resultado de la suma: \n");
                for (int i = 0; i < tamM; i++) {
                    for (int j = 0;j < tamM; j++) {
                        printf("%f ", matA[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Ingrese una opcion valida\n");
            }
            break;
        case 2:
            printf("\nIngrese el tamano de la matriz: ");
            scanf("%d", &tamM);
            if (tamM > 0 && tamM < 10) {
                for (int i = 0; i < tamM; i++) {
                    for (int j = 0; j < tamM; j++) {
                        printf("Ingrece el valor para la matriz A en la posicion %d, %d: ", i, j);
                        scanf("%f", &matA[i][j]);
                        printf("Ingrece el valor para la matriz B en la posicion %d, %d: ", i, j);
                        scanf("%f", &matB[i][j]);
                        matA[i][j] -= matB[i][j];
                    }
                }
                printf("Resultado de la resta: \n");
                for (int i = 0; i < tamM; i++) {
                    for (int j = 0;j < tamM; j++) {
                        printf("%f ", matA[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Ingrese una opcion valida\n");
            }
            break;
        case 3:
            printf("\nIngrese el tamano de la matriz: ");
            scanf("%d", &tamM);
            if (tamM > 0 && tamM < 10) {
                printf("\nIngrese el valor del escalar: ");
                scanf("%d", &kEsc);
                for (int i = 0; i < tamM; i++) {
                    for (int j = 0; j < tamM; j++) {
                        printf("Ingrece el valor para la posicion %d, %d: ", i, j);
                        scanf("%f", &matA[i][j]);
                        matA[i][j] *= kEsc;
                    }
                }
                printf("Resultado de la multiplicacion por escalar: \n");
                for (int i = 0; i < tamM; i++) {
                    for (int j = 0;j < tamM; j++) {
                        printf("%f ", matA[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Ingrese una opcion valida\n");
            }
            break;
        case 4:
            printf("\nIngrese el tamano de la matriz A: ");
            scanf("%d", &tamM);
            printf("\nIngrese el tamano de la matriz B: ");
            scanf("%d", &tamN);
            if ((tamM > 0 && tamM < 10) && (tamN > 0 && tamN < 10)) {
                tamO = (tamM > tamN) ? tamM : tamN;
                for (int i = 0; i < tamO; i++) {
                    for (int j = 0; j < tamO; j++) {
                        if (i < tamM && j < tamM) {
                            printf("Ingrece el valor para la matriz A en la posicion %d, %d: ", i, j);
                            scanf("%f", &matA[i][j]);
                        } else {
                            matA[i][j] = 0;
                        }
                        if (i < tamN && j < tamN) {
                            printf("Ingrece el valor para la matriz B en la posicion %d, %d: ", i, j);
                            scanf("%f", &matB[i][j]);
                        } else {
                            matB[i][j] = 0;
                        }
                        matA[i][j] *= matB[i][j];
                    }
                }
                printf("Resultado de la multiplicacion de matrices: \n");
                for (int i = 0; i < tamO; i++) {
                    for (int j = 0;j < tamO; j++) {
                        printf("%f ", matA[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Ingrese una opcion valida\n");
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