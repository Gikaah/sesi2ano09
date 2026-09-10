#include <stdio.h>

int main() {
    float reais, cotacao, dolares;

    scanf("%f %f", &reais, &cotacao);

    dolares = reais / cotacao;

    printf("%.2f", dolares);

    return 0;
}