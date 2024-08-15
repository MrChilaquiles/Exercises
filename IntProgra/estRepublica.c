#include <stdio.h>
#include <conio.h>

int main() {
    char est[32][20];
    for (int i=0; i<32; i++) {
        printf("Dame el nombre del estado: ", i+1);
        fflush(stdin);
        gets(est[i]);
    }
    for (int i=0; i<32; i++) {
        printf("Estado %d es: %s\n", i+1, est[i]);
    }
    getch();
    return 8;
}