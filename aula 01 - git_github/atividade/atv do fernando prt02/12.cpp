#include <stdio.h>
#include <math.h>

int main() {
    float num;

    scanf("%f", &num);

    if (num <= 0)
        printf("Numero invalido");
    else
        printf("Logaritmo: %.2f", log(num));

    return 0;
}