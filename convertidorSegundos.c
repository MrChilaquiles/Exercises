
#include <stdio.h>
#include <conio.h>

int main() {

    int h, m, s;

    printf("\nIngresa la cantidad de segundos: ");
    scanf("%d", &s);

    if (s <= 0) {
        printf("Error, dato no valido");
    } else{
        printf("\n%d segundo(s) equivale(n) a: ", s);
        if (s >= 3600) {
            h = s/3600;;
            printf("%d hora(s) ", h);
            s = s-3600*h;
        }
        if (s >= 60) {
            m = s/60;;
            printf("%d minuto(s) ", m);
            s = s-60*m;
        }
        if (s > 0) {
            printf("%d segundo(s) ", s);
        }
    }
    
    return 8;
}