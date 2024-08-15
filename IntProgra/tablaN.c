#include <stdio.h>

int main() {
    int num, mul = 0, total = 0;
    printf("Ingrese un numero de tipo entero para obtener su tabla de multiplicar\nNumero: ");
    scanf("%d", &num);
    if (num > 0) {
        while (mul <= 10) {
            total = num * mul;
            printf("%d x %d = %d\n", num, mul, total);
            mul++;
        }
        
    } else {
        printf("Ingrese un numero valido");
    }
    return 8;
}