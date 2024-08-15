#include <stdio.h>

int main() {

    int num;

    printf("Introduce un numero de tipo entero: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Es cero");
    } else if (num > 0) {
        printf("%d es un numero positivo", num);
    } else {
        printf("%d es un numero negativo", num);
    }
    
    if (num > 0) {
        if (num % 2 == 0) {
            printf(" y es par");
        } else {
            printf(", es impar");
        }
    }
    
    
    if (num % 2 != 0 && num > 0) {
        if (num % 3 == 0) {
            printf(" y es multiplo de 3");
        } else{
            printf(" y no es multiplo de 3");
        }
        
    }

    return 8;
}