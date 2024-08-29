#include <stdio.h>

int main() {
    int opc;
    printf("Selecciona una opcion\n1.- Dar de alta\n2.- Dar de baja\n3.- Consulta\n4.- Busqueda\nQue quieres hacer?\nOpcion:");
    scanf ("%d", &opc);
    switch (opc) {
    case 1:
        printf("Usuario dado de alta");
        break;
    case 2:
        printf("Se ha realizado la baja");
        break;
    case 3:
        printf("Consulta");
        break;
    case 4:
        printf("Busqueda");
        break;
    default:
        break;
    }
    return 8;
}