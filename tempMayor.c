#include <stdio.h>

int main() {
    float x[24], may = 0;
    int i;
    for (i = 0; i < 24; i++) {
        printf("Introduce una temperatura: ");
        scanf("%f", &x[i]);
        if (x[i] > may) {
            may = x[i];
        }
    }
    printf("La temperatura mayor fue: %.2f", may);
}