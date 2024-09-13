#include <stdio.h>
#define dim 10
int main() {
    int tamM, tamM1, tamN, tamN1, kEsc = 0, opc = 1;
    float matA[dim][dim], matB[dim][dim], matC[dim][dim];
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
            printf("Ingresa un valor para la fila de la matriz A: ");
            scanf("%d", &tamM);
            printf("Ingresa un valor para la columna de la matriz A: ");
            scanf("%d", &tamM1);
            printf("Ingresa un valor para la fila de la matriz B: ");
            scanf("%d", &tamN);
            printf("Ingresa un valor para la columna de la matriz B: ");
            scanf("%d", &tamN1);
            if ((tamM > 0 && tamM < 10) && (tamM1 > 0 && tamM1 < 10) && (tamN > 0 && tamN < 10) && (tamN1 > 0 && tamN1 < 10)) {
                if (tamM1 == tamN) {
                    printf("A continuacion ingrese los valores para la matriz A\n");
                    for (int i = 0; i < tamM; i++) {
                        for (int j = 0; j < tamM1; j++) {
                            printf("Ingrece el valor para la posicion %d, %d: ", i, j);
                            scanf("%f", &matA[i][j]);
                        }
                    }
                    printf("A continuacion ingrese los valores para la matriz B\n");
                    for (int i = 0; i < tamN; i++) {
                        for (int j = 0; j < tamN1; j++) {
                            printf("Ingrece el valor para la posicion %d, %d: ", i, j);
                            scanf("%f", &matB[i][j]);
                        }
                    }
                    for (int i = 0; i < tamM; i++) {
                        for (int j = 0; j < tamN1; j++) {
                            matC[i][j] = 0;
                            for (int k = 0; k < tamN; k++) {
                                matC[i][j] += matA[i][k] * matB[k][j];
                            }
                        }
                    }
                    printf("Resultado de la multiplicacion de A*B: \n");
                    for (int i = 0; i < tamM; i++) {
                        for (int j = 0;j < tamN1; j++) {
                            printf("%f ", matC[i][j]);
                        }
                        printf("\n");
                    }
                } else if (tamN1 == tamM) {
                    printf("A continuacion ingrese los valores para la matriz A\n");
                    for (int i = 0; i < tamM; i++) {
                        for (int j = 0; j < tamM1; j++) {
                            printf("Ingrece el valor para la posicion %d, %d: ", i, j);
                            scanf("%f", &matA[i][j]);
                        }
                    }
                    printf("A continuacion ingrese los valores para la matriz B\n");
                    for (int i = 0; i < tamN; i++) {
                        for (int j = 0; j < tamN1; j++) {
                            printf("Ingrece el valor para la posicion %d, %d: ", i, j);
                            scanf("%f", &matB[i][j]);
                        }
                    }
                    for (int i = 0; i < tamN; i++) {
                        for (int j = 0; j < tamM1; j++) {
                            matC[i][j] = 0;
                            for (int k = 0; k < tamM; k++) {
                                matC[i][j] += matB[i][k] * matA[k][j];
                            }
                        }
                    }
                    printf("Resultado de la multiplicacion de B*A: \n");
                    for (int i = 0; i < tamN; i++) {
                        for (int j = 0;j < tamM1; j++) {
                            printf("%f ", matC[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("No se puede realizar una multiplicacion de matrices con los datos introducidos");
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