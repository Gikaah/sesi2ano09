#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + 2 * n3) / 4;

    printf("Media: %.2f\n", media);

    if (media >= 60)
        printf("Aprovado");
    else
        printf("Reprovado");

    return 0;
}