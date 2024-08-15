#include <stdio.h>
int main() {
    int m, i;
    float cal, sum, prom;
    sum = 0;
    printf("Dame el numero de materias cursadas: ");
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        printf("Dame la calificacion de la materia %d: ", i);
        scanf("%f", &cal);
        sum += cal;
    }
    prom = sum/m;
    printf("El promedio es: %.1f", prom);
}