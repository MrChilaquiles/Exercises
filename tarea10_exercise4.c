#include <stdio.h>
#include <string.h>

void validar(char correo[]) {
    char *arroba = strchr(correo, '@');
    if (arroba != NULL) {
        printf("La direccion de correo es valida");
    } else {
        printf("La direccion de correo es invalida");
    }
}

int main() {
    char correo [50];
    printf("Bienvenido de nuevo\n");
    printf("Ingrese una direccion de correo: ");
    scanf("%s", &correo);
    validar(correo);
    return 8;
}
