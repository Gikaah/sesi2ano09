#include <stdio.h>

int main() {
    float altura, peso;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite M para homem ou F para mulher: ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
        peso = (72.7 * altura) - 58;
    else
        peso = (62.1 * altura) - 44.7;

    printf("Resultado: %.2f", peso);

    return 0;
}