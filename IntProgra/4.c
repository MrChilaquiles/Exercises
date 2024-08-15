#include <stdio.h>
#include <conio.h>
int main() {
    int i, j = 1, k = 1;
    for (int i = 10; i > 1; i = i - 2) {
        if (j + k < 10) {
            j = j * 2 + i;
        } else {
            j /= 2;
        }
        k = i % j;
        printf("%d, %d\n", j, k);
    }
    getch();
    return 0;
}