#include <stdio.h>

int main(){
    int n = 0, fib = 0, ant = 0, sig = 1;
    printf("Ingrese un numero para la sucesion de Fibonacci: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Ingrese un numero valido");
    } else {
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                printf("%d", fib);
            } else {
                printf("%d, ", fib);
            }
            fib = ant + sig;
            ant = sig;
            sig = fib;
        }
    }    
}