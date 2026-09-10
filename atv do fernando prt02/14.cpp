#include <stdio.h>

int main() {
    float lab, avaliacao, exame, media;

    scanf("%f %f %f", &lab, &avaliacao, &exame);

    if (lab < 0 || lab > 10 ||
        avaliacao < 0 || avaliacao > 10 ||
        exame < 0 || exame > 10) {
        printf("Nota invalida");
        return 0;
    }

    media = (lab * 2 + avaliacao * 3 + exame * 5) / 10;

    printf("Media: %.2f\n", media);

    if (media < 3)
        printf("Reprovado");
    else if (media < 5)
        printf("Recuperacao");
    else
        printf("Aprovado");

    return 0;
}