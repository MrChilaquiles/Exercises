#include <stdio.h>

int main() {
    int num, num2 = 0;
    
    printf("Dame un numero: ");
    scanf("%d", &num);
    while (num > num2) {
        printf("Dame un numero: ");
        scanf("%d", &num2);
    }
    
}