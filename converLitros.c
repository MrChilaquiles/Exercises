#include <stdio.h>

int main(){

    char opc;
    float litros;

    printf("Seleccione la conversion que desea hacer:\nA) Litros a microlitros\nB) Litros a mililitros\nC) Litros a centilitros\nD) Litros a decilitros\nE) Litros a galon\nConversion a elegir:");
    scanf("%c", &opc);
    printf("Ingrese la cantidad de litros: ");
    scanf("%f", &litros);
    switch (opc) {
    case 'A': case 'a':
        litros *= 1000000;
        printf("La conversion de litros a microlitros es: %.4f", litros);
        break;
    case 'B': case 'b':
        litros *= 1000;
        printf("La conversion de litros a mililitros es: %.4f", litros);
        break;
    case 'C': case 'c':
        litros *= 100;
        printf("La conversion de litros a centilitros es: %.4f", litros);
        break;
    case 'D': case 'd':
        litros *= 10;
        printf("La conversion de litros a decilitros es: %.4f", litros);
        break;
    case 'E': case 'e':
        litros *= .22;
        printf("La conversion de litros a galon es: %.4f", litros);
        break;
    default:
        printf("Ingrese una opcion valida");
        break;
    }

    return 8;
}