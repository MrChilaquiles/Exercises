#include <stdio.h>
#include <string.h>
#define MAXUsers 30
#define tam 20
#define tamM 50
typedef struct {
    char id[tam];
    char nombreC[tamM];
    char email[tamM];
    char telefono[tam];
} user;

int buscar(char ID[], int count, user users[], int nPro);
void registro(char dato[], int posicion, user users[], char trash);

int main() {
    user users[MAXUsers];
    int opc = 1, userCount = 0;
    char dato[50], clear;
    while (opc != 0) {
        printf("\nBienvenido a su agenda electronica\nSeleccione una opcion\n1.- Alta de usuario\n2.- Modificacion de usuario\n3.- Buscar usuario\n4.- Mostrar usuarios\n5.- Eliminar usuario\n0.- Salir\nOpcion: ");
        scanf("%d", &opc);
        do {clear = getchar();} while (clear != '\n');
        switch (opc) {
        case 1:
            if (userCount < MAXUsers) {
                printf("Ingrese su ID: ");
                fgets(dato, sizeof(users->id), stdin);
                dato[strlen(dato) - 1] = '\0';
                do {clear = getchar();} while (clear != '\n');
                if (userCount == 0) {
                    registro(dato, userCount, users, clear);
                    printf("Registro exitoso!!");
                    userCount++;
                } else if (buscar(dato, userCount, users, 0) != 0) {
                    registro(dato, userCount, users, clear);
                    printf("Registro exitoso!!");
                    userCount++;
                } else {
                    printf("ID de usuario ya registrado");
                }
            } else {
                printf("Limite de usuarios agregados");
            }
            break;
        case 2:
            printf("Modificacion");
            break;
        case 3:
            printf("buscar");
            break;
        case 4:
            printf("mostrar todos");
            break;
        case 5:
            printf("Eliminar");
            break;
        case 0:
            printf("Gracias!! nos vemos luego :)");
            break;
        default:
            break;
        }
    }
}

int buscar(char ID[], int count, user users[], int nPro) {
    for (int i = 0; i < count; i++) {
        if (strcmp(users[i].id, ID) == 0) {
            if (nPro == 1) {
                printf("ID: %s\nNombre completo: %s\nEmail: %s\nTelefono: %s", users[i].id, users[i].nombreC, users[i].email, users[i].telefono);
            }
            return 0;
        }
    }
    return 1;
}

void registro(char dato[], int posicion, user users[], char trash){
    strcpy(users[posicion].id, dato);
    printf("Nombre completo: ");
    fgets(dato, sizeof(users->nombreC), stdin);
    do {trash = getchar();} while (trash != '\n');
    dato[strlen(dato) - 1] = '\0';
    strcpy(users[posicion].nombreC, dato);
    printf("Email: ");
    fgets(dato, sizeof(users->email), stdin);
    do {trash = getchar();} while (trash != '\n');
    dato[strlen(dato) - 1] = '\0';
    strcpy(users[posicion].email, dato);
    printf("Telefono: ");
    fgets(dato, sizeof(users->telefono), stdin);
    do {trash = getchar();} while (trash != '\n');
    dato[strlen(dato) - 1] = '\0';
    strcpy(users[posicion].telefono, dato);
}