#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma\n");
    printf("2 - Diferenca\n");
    printf("3 - Produto\n");
    printf("4 - Divisao\n");

    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 4) {
        scanf("%f %f", &a, &b);

        switch (opcao) {
            case 1: printf("%.2f", a + b); break;
            case 2:
                if (a > b)
                    printf("%.2f", a - b);
                else
                    printf("%.2f", b - a);
                break;
            case 3: printf("%.2f", a * b); break;
            case 4:
                if (b != 0)
                    printf("%.2f", a / b);
                else
                    printf("Denominador nao pode ser zero");
                break;
        }
    } else {
        printf("Opcao invalida");
    }

    return 0;
}