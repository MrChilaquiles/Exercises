#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x, y, hs = 0;
    int tablero[2][4] = {{0,1,0,1},
                        {0,1,1,0}};
    printf("Bienvenido a BarquitosBattle!!!\n");
    printf("Para jugar necesitas introducir una coordenada como en el siguiente ejemplo:\nInserte una coordenada: 0,1\n");
    printf("Listo para la accion? Que comience la batalla!!!\n");
    _sleep(5);
    while (hs < 4) {
        system("cls");
        printf("Barcos restantes: %d\n", 4 - hs);
        printf("Ingrese una coordenada: ");
        scanf("%d,%d", &x, &y);
        if ((x < 0 || x > 1) || (y < 0 || y > 3)) {
            printf("La coordenada %d,%d no es valida\n", x, y);
        } else if (tablero[x][y] == 1) {
            printf("Me electrocutaste pedrito!!!\n");
            tablero[x][y] = 'X';
            hs++;
        } else {
            printf("Intentalo de nuevo\n");
        }
        _sleep(3);
    }
    system("cls");
    printf("Felicidades Pedrito me ganaste!!!");
}