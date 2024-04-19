#include <stdio.h>

int main() {
    int tam = 0;
    printf("Ingrese la cantidad de los arrays: ");
    scanf("%d", &tam);
    if (tam <= 10) {
        int A[tam], B[tam], C[tam];
        for (int i = 0; i < tam; i++) {
            printf("Ingresa el numero %d de A: ", i + 1);
            scanf("%d", &A[i]);
            printf("Ingresa el numero %d de B: ", i + 1);
            scanf("%d", &B[i]);
            C[i] = A[i] * B[i];
        }
        for (int i = 0; i < tam; i++) {
            printf("Valor del vector A%d: %d, B%d: %d, C%d: %d\n", i + 1, A[i], i + 1, B[i], i + 1, C[i]);
        }
    } else {
        printf("Ingrese una cantidad valida");
    }
    return 8;
}