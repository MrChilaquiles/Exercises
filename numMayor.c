#include <stdio.h>

int main() {

    int a, b, c;

    printf("Ingresar 3 numeros enteros: ");
    scanf("%d, %d, %d", &a, &b, &c);

    if (a > b && a > c) {
        printf("\n%d, es el mayor",a);
    }
    if (b > a && b > c) {
        printf("\n%d, es el mayor",b);
    }
    if (c > a && c > b) {
        printf("\n%d, es el mayor",c);
    }
    
    return 8;
}
