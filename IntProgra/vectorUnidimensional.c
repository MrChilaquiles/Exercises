#include <stdio.h>

int main() {
    int mayor = 0, tam = 0, sum = 0;

    printf("Este programa calcula si existe algún número en el vector cuyo valor equivale a la suma del resto de números del vector.\n");
    printf("Ingresa la cantidad del array: ");
    scanf("%d", &tam);
    int num[tam];
    for (int i = 0; i < tam; i++) {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] > mayor) {
            mayor = num[i];
        }
        sum += num[i];
    }
    if (mayor == sum - mayor) {
        printf("El numero mayor es: %d y es igual a la suma del resto de los numeros\n", mayor);
    } else {
        printf("El numero mayor es: %d y no es igual a la suma del resto de los numeros\n", mayor);
    }
}