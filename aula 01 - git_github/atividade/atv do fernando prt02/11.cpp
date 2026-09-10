#include <stdio.h>

int main() {
    int num, soma = 0;

    scanf("%d", &num);

    if (num <= 0) {
        printf("Numero invalido");
    } else {
        while (num > 0) {
            soma += num % 10;
            num /= 10;
        }

        printf("Soma: %d", soma);
    }

    return 0;
}