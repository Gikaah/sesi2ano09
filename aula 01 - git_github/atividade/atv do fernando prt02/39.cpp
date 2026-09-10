#include <stdio.h>

int main() {
    float salario, reajuste, bonus, final;
    int tempo;

    scanf("%f %d", &salario, &tempo);

    if (salario <= 500)
        reajuste = 0.25;
    else if (salario <= 1000)
        reajuste = 0.20;
    else if (salario <= 1500)
        reajuste = 0.15;
    else if (salario <= 2000)
        reajuste = 0.20;
    else
        reajuste = 0;

    if (tempo < 1)
        bonus = 0;
    else if (tempo <= 3)
        bonus = 100;
    else if (tempo <= 6)
        bonus = 200;
    else if (tempo <= 10)
        bonus = 300;
    else
        bonus = 500;

    if (reajuste == 0 && bonus == 0) {
        printf("Nao tem direito a aumento");
    } else {
        final = salario + salario * reajuste + bonus;
        printf("Salario final: R$ %.2f", final);
    }

    return 0;
}