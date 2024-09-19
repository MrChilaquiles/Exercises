#include <stdio.h>
#define tam 30
int main() {
    char nom[tam], nom2[tam], nom3[tam];
    printf("Ingrese el primer nombre: ");
    fgets(nom, tam, stdin);
    printf("Ingrese el segundo nombre: ");
    fgets(nom2, tam, stdin);
    printf("Ingrese el tercer nombre: ");
    fgets(nom3, tam, stdin);
    printf("Los nombres fueron %s, %s y %s", nom, nom2, nom3);
}