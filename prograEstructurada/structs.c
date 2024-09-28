#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    char nombres[50];
    char telefono[20];
}persona;

int main() {
    persona a[3];
    char nom[50], clear;
    for (int i = 0; i < 3; i++) {
    printf("ID: ");
    fgets(nom, sizeof(nom), stdin);
    do {clear = getchar();} while (clear != '\n');
    strcpy(a[i].id, nom);
    printf("Nombre: ");
    fgets(nom, sizeof(nom), stdin);
    do {clear = getchar();} while (clear != '\n');
    strcpy(a[i].nombres, nom);
    printf("Telefono: ");
    fgets(nom, sizeof(nom), stdin);
    do {clear = getchar();} while (clear != '\n');
    strcpy(a[i].telefono, nom);
    }
    for (int i = 0; i < 3; i++) {
        printf("ID: %s\nNombres: %s\nTelefono: %s", a[i].id, a[i].nombres, a[i].telefono);
    }
    return 0;
}