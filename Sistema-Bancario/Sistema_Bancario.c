#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int numTarj = 0, numCel, saldo;
char nombre[30], apellidos[30], NIP[5];

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
void verificarDatos() {
    int verificarCel = 0;
    char verificarNIP[5];
    
}
void registroCliente() {
    bool validacionNIP = false;
    system("cls");
    printf("Ingrese su nombre: ");
    fgets(nombre, 30, stdin);
    printf("Ingrese sus apellidos: ");
    fgets(apellidos, 30, stdin);
    printf("Ingrese su celular: ");
    scanf("%d", &numCel);
    limpiarBuffer();
    printf("Ingrese su numero de tarjeta: ");
    scanf("%d", &numTarj);
    limpiarBuffer();
    while (validacionNIP == false) {
        printf("Ingrese su NIP: ");
        scanf("%s", NIP);
        limpiarBuffer();
        if (strlen(NIP) == 4) {
            validacionNIP = true;
        } else {
            printf("Error: Ingrese un numero valido\n");
        }
    }
    printf("Registro exitoso!!!");
    saldo = 0;
    getch();
    system("cls");
}
void deposito() {
    system("cls");
    printf("prueba");
    getch();
    system("cls");
}
void verSaldo() {
    system("cls");
    printf("prueba");
    getch();
    system("cls");
}
void transDinero() {
    system("cls");
    printf("prueba");
    getch();
    system("cls");
}
void recarga() {
    system("cls");
    printf("prueba");
    getch();
    system("cls");
}
void cambioNIP() {
    system("cls");
    printf("prueba");
    getch();
    system("cls");
}
int main() {
    int opc = 0;
    while (opc!=7) {
        printf("Sea bienvenido a su banco!!! \nIndique a continuacion la operacion a realizar:\n1. Registrar a un nuevo cliente\n2. Depositar dinero a cuenta propia\n3. Verificar saldo en tarjeta\n4. Transferir dinero a otras cuentas\n5. Recargar tiempo aire\n6. Cambiar NIP\n7. Salir\nOpcion: ");
        scanf("%d", &opc);
        limpiarBuffer();
        switch (opc) {
        case 1:
        fflush(stdin);
            registroCliente();
            break;
        case 2:
            deposito();
            break;
        case 3:
            verSaldo();
            break;
        case 4: 
            transDinero();
            break;
        case 5:
            recarga();
            break;
        case 6:
            cambioNIP();
            break;
        case 7:
            system("cls");
            printf("Que tenga un buen dia!!!");
            getch();
            system("cls");
            break;
        default:
            system("cls");
            printf("Ingrese una opcion valida");
            getch();
            system("cls");
            break;
        }
    }   
}       