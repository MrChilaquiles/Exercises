#include <conio.h>
#include <stdio.h>

int main() {
    int ac = 0, i, primero[15] = {21,12,23,14,25,16,27,7,1,21,24,11};
    for (i = 11; i > 1; i = i-2) {
        ac += primero[i - 1] - i;
        printf("%d, %d\n", primero[i + 2], ac);
    }
    getch();
    return 8;
}