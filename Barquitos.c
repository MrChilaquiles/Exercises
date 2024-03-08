#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y, hs = 0;
    int tablero[2][4] = {{0,1,0,1},
                        {0,1,1,0}};
    printf("Bienvenido a BarquitosBattle!!!\n");
    printf("Para jugar necesitas introducir una coordenada como en el siguiente ejemplo:\nInserte una coordenada: 0,1\n");
    printf("Listo para la accion? Que comience la batalla!!!\n");
    while (hs < 4) {
        //system("clear");
        printf("Ingrese una coordenda: ");
        scanf("%d,%d", &x, &y);
        if (x <= 0 && x >= 1 || y <= 0 && y >= 3) {
            printf("La coordenada %d,%d no es valida\n", x, y);
        } else if (tablero[x][y] == 1) {
            printf("Me electrocutaste pedrito!!!\n");
            hs++;
        } else {
            printf("Intentalo de nuevo\n");
        }
    }
    printf("Felicidades Pedrito me ganaste!!!");
}