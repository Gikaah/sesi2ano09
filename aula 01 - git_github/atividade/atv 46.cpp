#include <stdio.h>

int main() {
    int numero, invertido;

    scanf("%d", &numero);

    invertido = (numero % 10) * 100
              + ((numero / 10) % 10) * 10
              + numero / 100;

    printf("%d", invertido);

    return 0;
}