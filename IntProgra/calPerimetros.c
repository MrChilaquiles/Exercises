#include <stdio.h>

int main() {

    const float PI = 3.1416;
    char opc;
    float x, peri;

    printf("Este programa calcula los siguientes perimetros en cm:\nA) Perimetro de un triangulo equilatero.\nB) Perimetro de un circulo.\nC) Perimetro de un cuadrado.\nElige una opcion: ");
    scanf("%c", &opc);

    switch (opc) {
    case 'A': case 'a':
        printf("\nDigite la base: ");
        scanf("%f", &x);
        peri = x * 3;
        break;
    case 'B': case 'b':
        printf("\nCual es el radio del circulo?: ");
        scanf("%f", &x);
        peri = x * 2 * PI;
        break;
    case 'C': case 'c':
        printf("\nCuanto mide un lado del cuadrado?: ");
        scanf("%f", &x);
        peri = x * 4;
    default:
        printf("\nLa opcion que digito no existe.");
        break;
    }

    printf("El perimetro es: %f", peri);

    return 8;
}