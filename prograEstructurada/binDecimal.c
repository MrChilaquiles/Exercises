#include <stdio.h>
#include <math.h>

int main() {
    int bin[8], dec = 0, poten = 0;

    for (int i = 0; i < 8; i++) {
        printf("Dame un numero para la posicion %d: ", i + 1);
        scanf("%d", &bin[i]);
        for (int j = 1; j < 8; j++) {
            poten = 2*j;
        }
        dec += bin[i]*poten;
    }
    printf("%d", dec);
}