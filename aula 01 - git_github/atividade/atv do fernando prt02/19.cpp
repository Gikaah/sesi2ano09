#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if ((num % 3 == 0) != (num % 5 == 0))
        printf("Divisivel por 3 ou 5");
    else
        printf("Nao atende a condicao");

    return 0;
}