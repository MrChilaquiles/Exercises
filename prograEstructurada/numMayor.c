#include <stdio.h>

int main() {
    int num, num2;

    printf("Dame un numero: ");
    scanf("%d", &num);
    do {
        printf("Dame otro numero: ");
        scanf("%d", &num2);
    } while (num > num2);
    
    return 8;
}