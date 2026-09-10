#include <stdio.h>

int main() {
    float dias, valor;

    scanf("%f", &dias);

    valor = dias * 30;
    valor = valor * 0.92;

    printf("%.2f", valor);

    return 0;
}