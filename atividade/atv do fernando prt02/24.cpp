#include <stdio.h>

int main() {
    float valor, final;
    char estado;

    scanf("%f %c", &valor, &estado);

    switch (estado) {
        case 'M':
            final = valor * 1.07;
            break;
        case 'S':
            final = valor * 1.12;
            break;
        case 'R':
            final = valor * 1.15;
            break;
        default:
            printf("Estado invalido");
            return 0;
    }

    printf("Preco final: %.2f", final);

    return 0;
}