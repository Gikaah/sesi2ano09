#include <stdio.h>

int main() {
    float salario, novoSalario;

    scanf("%f", &salario);

    novoSalario = salario * 1.25;

    printf("%.2f", novoSalario);

    return 0;
}