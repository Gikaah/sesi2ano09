#include <stdio.h>

int main() {
    float degrau, altura, quantidade;

    scanf("%f %f", &degrau, &altura);

    quantidade = altura / degrau;

    printf("%.0f", quantidade);

    return 0;
}