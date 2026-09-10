#include <stdio.h>

int main() {
    float preco, novo;

    scanf("%f", &preco);

    if (preco <= 50)
        novo = preco * 1.05;
    else if (preco <= 100)
        novo = preco * 1.10;
    else
        novo = preco * 1.15;

    printf("Novo preco: %.2f\n", novo);

    if (novo <= 80)
        printf("Barato");
    else if (novo <= 120)
        printf("Normal");
    else if (novo <= 200)
        printf("Caro");
    else
        printf("Muito caro");

    return 0;
}