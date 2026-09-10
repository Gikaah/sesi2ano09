#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Quadrado: %.2f\n", num * num);
        printf("Raiz: %.2f", sqrt(num));
    }

    return 0;
}