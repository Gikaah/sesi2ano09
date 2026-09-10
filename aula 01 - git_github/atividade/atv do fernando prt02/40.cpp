#include <stdio.h>

int main() {
    float fabrica, distribuidor, imposto, consumidor;

    scanf("%f", &fabrica);

    if (fabrica <= 12000) {
        distribuidor = 0.05;
        imposto = 0;
    }
    else if (fabrica <= 25000) {
        distribuidor = 0.10;
        imposto = 0.15;
    }
    else {
        distribuidor = 0.15;
        imposto = 0.20;
    }

    consumidor = fabrica +
                 fabrica * distribuidor +
                 fabrica * imposto;

    printf("Custo ao consumidor: R$ %.2f", consumidor);

    return 0;
}