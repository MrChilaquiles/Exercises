#include <stdio.h>

int main() {
    int num = 6;
    while (num <= 200) {
        if (num >= 20) {
            printf("%d\n", num);
        }
        num += 6;
    }
}