#include <stdio.h>

int main() {
    float n1, n2, media;

    scanf("%f %f", &n1, &n2);

    if (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10) {
        printf("Nota invalida");
    } else {
        media = (n1 + n2) / 2;
        printf("Media: %.2f", media);
    }

    return 0;
}