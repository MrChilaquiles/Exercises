#include <stdio.h>

int main() {
    
    int piezas;
    float pPieza = 120, total;
    
    printf("Introduce la cantidad de piezas de ropa: ");
    scanf("%d", &piezas);

    if (piezas > 30) {
        total = (pPieza * piezas * .7);
    } else if (piezas >= 20 && piezas <= 30) {
        total = (pPieza * piezas * .8);
    } else if (piezas > 10) {
        total = (pPieza * piezas * .9);
    } else {
        total = (pPieza * piezas);;
    }
    
    printf("\nImporte total de la compra: %f", total);

    return 8;
}