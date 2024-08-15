#include<stdio.h> 
#include<conio.h> 
int main() { 
    int contador, suma = 0; 
        for(contador = 0; contador <= 100; contador++) {
            suma = suma + contador; 
            printf("La suma es: %d ", suma); 
        }
    getch(); 
}
