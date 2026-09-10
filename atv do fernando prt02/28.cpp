#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, resposta, acertos = 0;

    srand(time(NULL));

    for (int i = 1; i <= 5; i++) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;

        printf("Qual e a soma de %d + %d? ", a, b);
        scanf("%d", &resposta);

        if (resposta == a + b) {
            printf("Acertou!\n");
            acertos++;
        } else {
            printf("Errado! Resposta correta: %d\n", a + b);
        }
    }

    printf("Voce acertou %d de 5.", acertos);

    return 0;
}