#include <stdio.h>

int main() {
    int h1, m1, h2, m2;
    int chegada, saida, minutos, horas;
    float preco = 0;

    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    chegada = h1 * 60 + m1;
    saida = h2 * 60 + m2;

    if (saida < chegada)
        saida += 24 * 60;

    minutos = saida - chegada;

    horas = minutos / 60;

    if (minutos % 60 != 0)
        horas++;

    if (horas <= 2)
        preco = horas * 1.00;
    else if (horas <= 4)
        preco = 2 * 1.00 + (horas - 2) * 1.40;
    else
        preco = 2 * 1.00 + 2 * 1.40 + (horas - 4) * 2.00;

    printf("Preco: R$ %.2f", preco);

    return 0;
}