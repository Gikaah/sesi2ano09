#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &opcao);

    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1: printf("%.2f", a + b); break;
        case 2: printf("%.2f", a - b); break;
        case 3: printf("%.2f", a * b); break;
        case 4:
            if (b != 0)
                printf("%.2f", a / b);
            else
                printf("Nao pode dividir por zero");
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}