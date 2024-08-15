#include <stdio.h>

int Acum(int vector[], int x) {
    int i, suma=0;
    for (i=0; i<x; i++) {
        suma += vector[i];
    }
    return (suma);
}

int Suma(int x, int y=3) {
    return (x+y);
}

int main() {
    int v[6] = {2,7,3,4,10,29};
    int s;
    s = Acum(v, Suma(3));
    printf("%d", s);
}