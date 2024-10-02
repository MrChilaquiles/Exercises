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
void mostrar(int count, user users[]);
void eliminar(int pos, int count, user users[]);

int main() {
    user users[MAXUsers];
    int opc = 1, userCount = 0, pos = 0;
    char dato[50], clear;
    while (opc != 0) {
        printf("\nBienvenido a su agenda electronica\nSeleccione una opcion\n1.- Alta de usuario\n2.- Modificacion de usuario\n3.- Buscar usuario\n4.- Mostrar usuarios\n5.- Eliminar usuario\n0.- Salir\nOpcion: ");
        scanf("%d", &opc);
        do {clear = getchar();} while (clear != '\n');
        switch (opc) {
        case 1:
            if (userCount < MAXUsers) {
                printf("Ingrese el ID del usuario: ");
                fgets(dato, sizeof(users->id), stdin);
                dato[strlen(dato) - 1] = '\0';
                //do {clear = getchar();} while (clear != '\n');
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
            if (userCount > 0) {
                printf("Ingrese el ID del usuario a modificar: ");
                fgets(dato, sizeof(users->id), stdin);
                dato[strlen(dato) - 1] = '\0';
                pos = buscar(dato, userCount, users, 2);
                if (strcmp(users[pos].id, dato) == 0) {
                    registro(dato, pos, users, clear);
                } else {
                    printf("ID de usuario no registrado");
                }
            } else {
                printf("No se puede realizar esta accion porque aun no hay usuarios registrados");
            }
            break;
        case 3:
            if (userCount > 0) {
                printf("Ingrese el ID del usuario a buscar: ");
                fgets(dato, sizeof(users->id), stdin);
                dato[strlen(dato) - 1] = '\0';
                if (buscar(dato, userCount, users, 0) == 0) {
                    buscar(dato, userCount, users, 1);
                } else {
                    printf("Usuario no registrado");
                }
            } else {
                printf("No se puede realizar esta accion porque aun no hay usuarios registrados");
            }
            break;
        case 4:
            if (userCount > 0) {
                printf("Usuarios registrados\n");
                mostrar(userCount, users);
            } else {
                printf("No se puede realizar esta accion porque aun no hay usuarios registrados");
            }
            break;
        case 5:
            if (userCount > 0) {
                printf("Ingrese el ID del usuario a eliminar: ");
                fgets(dato, sizeof(users->id), stdin);
                dato[strlen(dato) - 1] = '\0';
                if (buscar(dato, userCount, users, 0) == 0) {
                    pos = buscar(dato, userCount, users, 2);
                    eliminar(pos, userCount, users);
                    userCount--;
                } else {
                    printf("ID de usuario no registrado");
                }
            } else {
                printf("No se puede realizar esta accion porque aun no hay usuarios registrados");
            }
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
                return 0;
            } else if (nPro == 2) {
                return i;
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
    //do {trash = getchar();} while (trash != '\n');
    dato[strlen(dato) - 1] = '\0';
    strcpy(users[posicion].nombreC, dato);
    printf("Email: ");
    fgets(dato, sizeof(users->email), stdin);
    //do {trash = getchar();} while (trash != '\n');
    dato[strlen(dato) - 1] = '\0';
    strcpy(users[posicion].email, dato);
    printf("Telefono: ");
    fgets(dato, sizeof(users->telefono), stdin);
    //do {trash = getchar();} while (trash != '\n');
    dato[strlen(dato) - 1] = '\0';
    strcpy(users[posicion].telefono, dato);
}

void mostrar(int count, user users[]) {
    for (int i = 0; i < count; i++) {
        printf("Usuario %i\nID: %s\nNombre completo: %s\nEmail: %s\nTelefono: %s\n", (i + 1), users[i].id, users[i].nombreC, users[i].email, users[i].telefono);
    }
}

void eliminar(int pos, int count, user users[]) {
    for (int i = pos; i < count; i++) {
        strcpy(users[i].id, users[i+1].id);
        strcpy(users[i].nombreC, users[i+1].nombreC);
        strcpy(users[i].email, users[i+1].email);
        strcpy(users[i].telefono, users[i+1].telefono);
    }
}