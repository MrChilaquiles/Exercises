#include <stdio.h>

int main() {
    int num = 7;
    printf("Este programa muestra el producto de todos los multiplos de 7 que se encuentran del 10 al 137\n");
    for (int i = 10; i <= 137; i++) {
        if (i % num == 0) {
            printf("%d es multiplo de 7\n", i);
        }
    }
    return 8;
}