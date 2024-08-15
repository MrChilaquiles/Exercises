#include <stdio.h>
int main() {
    int i, num, may = 0;
    for(i = 1; i <= 10; i++) {
        printf("Ingrese el número %d: ", i);
        scanf("%d", &num);
        if(num > may) {
            may = num;  // Actualizamos el número mayor
        }
    }
    printf("El número mayor es: %d\n", may);
    return 0;
}