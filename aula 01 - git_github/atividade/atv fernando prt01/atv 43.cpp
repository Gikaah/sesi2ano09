#include <stdio.h>

int main() {
    float valor, desconto, parcela;
    float comissaoVista, comissaoParcelada;

    scanf("%f", &valor);

    desconto = valor * 0.90;
    parcela = desconto / 3;

    comissaoVista = desconto * 0.05;
    comissaoParcelada = valor * 0.05;

    printf("Com desconto: %.2f\n", desconto);
    printf("Parcela: %.2f\n", parcela);
    printf("Comissao a vista: %.2f\n", comissaoVista);
    printf("Comissao parcelada: %.2f", comissaoParcelada);

    return 0;
}