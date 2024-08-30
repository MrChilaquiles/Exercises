#include <stdio.h>
#include <math.h>

int main() {
    int bin[8], dec = 0;

    for (int i = 0; i < 8; i++) {
        printf("Dame un numero para la posicion %d: ", i + 1);
        scanf("%d", &bin[i]);
        int poten = 1;
        for (int j = 0; j < (7-i); j++) {
            poten *= 2;
        }
        dec += bin[i]*poten;
    }
    printf("%d", dec);
}