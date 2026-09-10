#include <stdio.h>

int main() {
    float km, litros, consumo;

    scanf("%f %f", &km, &litros);

    consumo = km / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8)
        printf("Venda o carro!");
    else if (consumo <= 14)
        printf("Economico!");
    else
        printf("Super economico!");

    return 0;
}