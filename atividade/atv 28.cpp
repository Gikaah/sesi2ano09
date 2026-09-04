#include <stdio.h>

int main() {
    float a, b, c, soma;

    scanf("%f %f %f", &a, &b, &c);

    soma = a*a + b*b + c*c;

    printf("%.2f", soma);

    return 0;
}