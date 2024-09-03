#include <stdio.h>

int main() {
    int bin[8], dec = 0;
    printf("Ingrese un numero entero entre -256;255: ");
    scanf("%d", &dec);
    if (dec < 0) {
        dec *= -1;
        for (int i = 0; i < 8; i++) {
            int poten = 1;
            for (int j = 0; j < (7-i); j++) {
                poten *= 2;
            }           
            if (dec - poten >= 0) {
                bin[i] = 0;
                dec -= poten;
            } else {
                bin[i] = 1;
            }
        }
        bin[7] = 1;
        for (int i = 0; i < 8; i++) {
            printf("%d", bin[i]);
        }
    } else {
        for (int i = 0; i < 8; i++) {
            int poten = 1;
            for (int j = 0; j < (7-i); j++) {
                poten *= 2;
            }
            if (dec - poten >= 0) {
                bin[i] = 1;
                dec -= poten;
            } else {
                bin[i] = 0;
            }
            printf("%d", bin[i]);
        }
    }
    return 8;
}