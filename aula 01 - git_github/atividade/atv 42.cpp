#include <stdio.h>

int main() {
    float salario, gratificacao, imposto, receber;

    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    imposto = salario * 0.07;

    receber = salario + gratificacao - imposto;

    printf("%.2f", receber);

    return 0;
}