#include <stdio.h>
#define tam 30
int main() {
    char nom[3][tam];
    for (int i = 0; i < 3; i++) {
        printf("Ingrese el nombre %d: ", i + 1);
        fgets(nom[i], tam, stdin);
    }
    printf("Los nombres fueron %s, %s y %s", nom[0], nom[1], nom[2]);
}