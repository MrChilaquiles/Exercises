#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int numTarj = 0, numCel, saldo;
char nombre[30], apellidos[30], numNIP[5];

void limpiarBuffer() { // Funcion para limpiar el buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } // Mientras el caracter sea diferente a un salto de linea o fin de archivo se limpiara el buffer
}
void verificarDatos() { // Funcion para verificar los datos del cliente
    int verificarCel = 0;
    char verificarNIP[5];
    bool validacionCel = false, validacionNIP = false;
    while (validacionCel == false || validacionNIP == false) { // Mientras validacionCel o validacionNIP sean falsos se ejecutara el ciclo
        if (validacionCel == false) { // Si validacionCel es falso se ejecutara el siguiente bloque de codigo
            printf("Ingrese su numero celular: ");
            scanf("%d", &verificarCel);
            limpiarBuffer(); // Limpia el buffer
            if (verificarCel == numCel) { // Si verificarCel es igual a numCel se ejecutara el siguiente bloque de codigo
                validacionCel = true; 
            } else { 
                printf("Error: Numero incorrecto");
            }
        }
        if (validacionNIP == false) { // Si validacionNIP es falso se ejecutara el siguiente bloque de codigo
            printf("Ingrese su numNIP: ");
            scanf("%s", &numNIP);
            limpiarBuffer(); // Limpia el buffer
            strcpy(verificarNIP, numNIP); // Copia el valor de numNIP a verificarNIP esto se hace para comparar los valores
            if (strcmp(numNIP, verificarNIP) == 0) { //strcmp compara dos cadenas de caracteres y si son iguales devuelve 0 en caso contrario devuelve un valor diferente de 0
                validacionNIP = true;
            } else {
                printf("Error: NIP incorrecto\n");
                system("cls");
            }
        }
    }
    printf("Datos ingresados correctamente!!!\nNombre completo: %s %s\n", nombre, apellidos); 
}
void validacionDatos(int numValidar, bool* isOk) { // Funcion para validar los datos ingresados
    int validacionIsOk = 0;
    if (numValidar <= saldo && numValidar > 0) { // Si numValidar es menor o igual a saldo y numValidar es mayor a 0 se ejecutara el siguiente bloque de codigo
        printf("Los datos ingresados son correctos?\n1. Si\n2. No");
        scanf("%d", &validacionIsOk);
        limpiarBuffer();
        if (validacionIsOk == 1) { // Si validacionIsOk es igual a 1 se ejecutara el siguiente bloque de codigo
            *isOk = true;
        } else {
            printf("Ingrese los datos nuevamente");
            *isOk = false;
        }
    } else {
        printf("Error: Ingrese una cantidad valida");
        *isOk = false;
    }
}
void registroCliente() { // Funcion para registrar a un nuevo cliente
    bool validacionNIP = false;
    system("cls");
    printf("Ingrese su nombre: "); // Pide al usuario que ingrese su nombre
    fgets(nombre, 30, stdin); //fgets se utiliza para leer una cadena de caracteres
    printf("Ingrese sus apellidos: "); // Pide al usuario que ingrese sus apellidos
    fgets(apellidos, 30, stdin);
    printf("Ingrese su celular: "); // Pide al usuario que ingrese su numero de celular
    scanf("%d", &numCel);
    limpiarBuffer();
    printf("Ingrese su numero de tarjeta: "); // Pide al usuario que ingrese su numero de tarjeta
    scanf("%d", &numTarj);
    limpiarBuffer();
    while (validacionNIP == false) { // Mientras validacionNIP sea falso se ejecutara el siguiente bloque de codigo
        printf("Ingrese su numNIP: ");
        scanf("%s", &numNIP);
        limpiarBuffer();
        if (strlen(numNIP) == 4) { // Si la longitud de numNIP es igual a 4 se ejecutara el siguiente bloque de codigo
            validacionNIP = true;
        } else {
            printf("Error: Ingrese un numero valido\n");
        }
    }
    printf("Registro exitoso!!!");
    saldo = 0; // Inicializa el saldo en 0
    getch();
    system("cls");
}
void deposito() { // Funcion para depositar dinero
    int monto = 0, validacionIsOk = 0;
    bool isOk = false;
    system("cls");
    verificarDatos(); // Llama a la funcion verificarDatos
    while (isOk == false) { // Mientras isOk sea falso se ejecutara el siguiente bloque de codigo
        printf("Ingrese monto a depositar: ");
        scanf("%d", &monto);
        limpiarBuffer();
        printf("El monto ingresado esta correcto?\n1. Si\n2.No");
        scanf("%d", &validacionIsOk);
        if (validacionIsOk == 1) { // Si validacionIsOk es igual a 1 se ejecutara el siguiente bloque de codigo
            isOk = true;
        } else {
            printf("Ingrese el monto de nuevo");
        }
    }
    printf("Monto depositado: %d\nNumero de tarjeta: %d", monto, numTarj);
    saldo += monto; // Suma el monto al saldo
    getch();
    system("cls");
}
void verSaldo() {
    system("cls");
    verificarDatos();
    printf("Saldo en la cuenta: %d", saldo);
    getch();
    system("cls");
}
void transDinero() {
    int numTarjBen = 0, cantDeposito = 0;
    char nomBeneficiario[50];
    bool isOk = false;
    system("cls");
    verificarDatos();
    printf("Saldo disponible: %d", saldo);
    while (isOk == false) {
        printf("Ingrese el nombre del beneficiario: ");
        fgets(nomBeneficiario, 50, stdin);
        limpiarBuffer();
        printf("Ingrese el numero de tarjeta del beneficiario: ");
        scanf("%d", &numTarjBen);
        limpiarBuffer();
        printf("Ingrese la cantidad a depositar: ");
        scanf("%d", &cantDeposito);
        validacionDatos(cantDeposito, &isOk);
    }
    printf("Transferencia exitosa!!!\nNombre del beneficiario: %s\nNumero de tarjeta: %d\nCantidad depositada: %d", nomBeneficiario, numTarjBen, cantDeposito);
    saldo -= cantDeposito;
    getch();
    system("cls");
}
void recarga() {
    int comp = 0, cantRecarga = 0, numRecarga = 0;
    bool isOk = false;
    system("cls");
    verificarDatos();
    printf("Saldo disponible: %d", saldo);
    while (isOk == false) {
        printf("Ingrese la compania a recargar:\n1. Telcel\n2. Movistar\n3. AT&T\n4. Unefon\n5. Pillofon\nOpcion: ");
        scanf("%d", &comp);
        limpiarBuffer();
        printf("Ingrese el numero de celular a recargar: ");
        scanf("%d", &numRecarga);
        limpiarBuffer();
        printf("Ingrese la cantidad a recargar: ");
        scanf("%d", &cantRecarga);
        validacionDatos(cantRecarga, &isOk);
    }
    printf("Recarga exitosa!!!\nNumero de celular: %d\nCantidad recargada: %d", numRecarga, cantRecarga);
    saldo -= cantRecarga;
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
        printf("Sea bienvenido a su banco!!! \nIndique a continuacion la operacion a realizar:\n1. Registrar a un nuevo cliente\n2. Depositar dinero a cuenta propia\n3. Verificar saldo en tarjeta\n4. Transferir dinero a otras cuentas\n5. Recargar tiempo aire\n6. Cambiar numNIP\n7. Salir\nOpcion: ");
        scanf("%d", &opc);
        limpiarBuffer(); // Limpia el buffer
        switch (opc) {
        case 1:
        fflush(stdin);
            registroCliente(); // Llama a la funcion registroCliente
            break;
        case 2:
            deposito(); // Llama a la funcion deposito
            break;
        case 3:
            verSaldo(); // Llama a la funcion verSaldo
            break;
        case 4: 
            transDinero(); // Llama a la funcion transDinero
            break;
        case 5:
            recarga(); // Llama a la funcion recarga
            break;
        case 6:
            cambioNIP(); // Llama a la funcion cambioNIP
            break;
        case 7:
            system("cls");
            printf("Que tenga un buen dia!!!"); // Mensaje de despedida
            getch();
            system("cls"); 
            break;
        default:
            system("cls");
            printf("Ingrese una opcion valida"); // En caso de que el usuario ingrese una opcion invalida
            getch();
            system("cls");
            break;
        }
    }   
}       