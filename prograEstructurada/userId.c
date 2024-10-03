#include <stdio.h>
#include <string.h>
#define tam 30
int main() {
    int idUser, edad;
    char nombre[tam], email[tam], clear;
    size_t f;
    printf("Ingrese su ID: ");
    scanf("%d", &idUser);
    do {clear = getchar();} while (clear != '\n');
    printf("Ingrese su nombre: ");
    fgets(nombre, tam, stdin);
    f = strlen(nombre);
    if (nombre[strlen(nombre) - 1] == '\n') {
        nombre[strlen(nombre) - 1] = '\0';
    } else {
        do {clear = getchar();} while (clear != '\n');
    }
    printf("Ingrese su edad: ");
    scanf("%d", &edad);
    do {clear = getchar();} while (clear != '\n');
    printf("Ingrese su correo: ");
    fgets(email, tam, stdin);
    printf("ID: %d Nombre: %s Edad: %d Email: %s", idUser, nombre, edad, email);
}