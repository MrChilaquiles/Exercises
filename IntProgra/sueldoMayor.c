#include <stdio.h>

int main() {
    float sal[30], salMayor = 0;
    int i, trab, sm;
    printf("Total de trabajadores: ");
    scanf("%d", &trab);
    for (i = 0; i < trab; i++) {
        printf("Dame el salario del trabajador %d: ", i + 1);
        scanf("%f", &sal[i]);
        if (sal[i] > salMayor) {
            sm = i + 1;
            salMayor = sal[i];
        }
    }
    printf("El salario mayor es: %f y pertenece al trabajador: %d", salMayor, sm);
    return 8;
}