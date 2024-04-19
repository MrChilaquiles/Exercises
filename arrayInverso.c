#include <stdio.h>
#include <conio.h>

int main() {
    int x[8], i;
    for (i = 0; i < 8; i++) {
        printf("Introduce un numero: ");
        scanf("%d", &x[7 - i]);
    }
    printf("El arreglo de manera inversa es: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", x[i]);
    }
    return 8;
}