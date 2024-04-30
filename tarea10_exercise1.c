#include <stdio.h>

void func_A() {
    printf("Arabia\n");
}

void func_B() {
    printf("Italia\n");
    printf("Chile\n");
}

void func_C() {
    printf("Australia\n");
}

void func_D() {
    printf("Colombia\n");
}

int main() {
    func_C();
    func_A();
    func_D();
    func_B();
}