#include <stdio.h>

int main() {
    float comprimento, largura, preco, custo;

    scanf("%f %f %f", &comprimento, &largura, &preco);

    custo = (2 * comprimento + 2 * largura) * preco;

    printf("%.2f", custo);

    return 0;
}