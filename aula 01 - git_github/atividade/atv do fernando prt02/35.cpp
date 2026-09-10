#include <stdio.h>

int main() {
    int dia, mes, ano;
    int dias;

    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 1 || mes > 12) {
        printf("Data invalida");
        return 0;
    }

    if (mes == 2) {
        if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
            dias = 29;
        else
            dias = 28;
    }
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        dias = 30;
    else
        dias = 31;

    if (dia >= 1 && dia <= dias)
        printf("Data valida");
    else
        printf("Data invalida");

    return 0;
}