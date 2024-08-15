#include <stdio.h>

int main() {
    
    int horas, horas_extras;
    float pago_hora, sueldo;
    
    printf("Introduce la cantidad de horas trabajadas: ");
    scanf("%d", &horas);
    printf("\nIntroduce la cantidad de pago por hora: ");
    scanf("%f", &pago_hora);

    if (horas > 40) {
        horas_extras = horas - 40;
        sueldo = (pago_hora * (horas - horas_extras)) + (pago_hora * horas_extras * 1.2);
    } else if (horas >= 30 && horas <= 40) {
        sueldo = horas * pago_hora;
    } else {
        sueldo =  horas * pago_hora * .88;
    }
    
    printf("\nTu sueldo es: %f pesos", sueldo);

    return 8;
}