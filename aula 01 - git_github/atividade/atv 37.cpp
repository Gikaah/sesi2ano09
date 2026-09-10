#include <stdio.h>

int main() {
    float produto, desconto;

    scanf("%f", &produto);

    desconto = produto * 0.88;

    printf("%.2f", desconto);

    return 0;
}