#include <stdio.h>

int main() {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Maior: %d", a);
    else if (b > a)
        printf("Maior: %d", b);
    else
        printf("Numeros iguais");

    return 0;
}