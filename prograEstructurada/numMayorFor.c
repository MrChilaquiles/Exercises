#include <stdio.h>

int main() {
    int num, num2;
    printf("Dame un numero: ");
    scanf("%d", &num);
    printf("Dame un numero: ");
    scanf("%d", &num2);
    for (int i = num; i > num2;) {
        printf("Dame un numero: ");
        scanf("%d", &num2);
    }
    return 8;
}