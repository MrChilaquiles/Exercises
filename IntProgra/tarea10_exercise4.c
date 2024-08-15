#include <stdio.h>
#include <string.h>

void validar(char correo[]) {
    char *arroba = strchr(correo, '@'); //Se utiliza un puntero porque la funcion strchr devuelve un puntero
    if (arroba != NULL) { //Si es diferente de NULL, significa que se encontro la arroba ya que la funcion strchr devuelve NULL si no se encuentra el caracter
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
