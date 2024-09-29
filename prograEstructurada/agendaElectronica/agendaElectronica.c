#include <stdio.h>
#include <string.h>
#define MAXUsers 30

typedef struct {
    char id[20]
    char nombreC[50];
    char email[50];
    char telefono[10];
} user;

int main() {
    user users[MAXUsers];
    int opc = 1, usercount = 0;
    char dato[50], clear;
    while (opc != 0) {
        printf("Bienvenido a su agenda electronica\nSeleccione una opcion\n1.- Alta de usuario\n2.- Modificacion de usuario\n3.- Buscar usuario\n4.- Mostrar usuarios\n5.- Eliminar usuario\n0.- Salir");
        scanf("%d", &opc);
        switch (opc) {
        case 1:
            printf("Alta");
            break;
        case 2:
            printf("Modificacion");
            break;
        case 3:
            printf("buscar");
            break;
        case 4:
            printf("mostrar todos");
            break;
        case 5:
            printf("Eliminar");
            break;
        case 0:
            printf("Gracias!! nos vemos luego :)");
            break;
        default:
            break;
        }
    }
}