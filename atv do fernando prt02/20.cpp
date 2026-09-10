#include <stdio.h>

int main() {
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {

        if (a == b && b == c)
            printf("Equilatero");
        else if (a == b || a == c || b == c)
            printf("Isosceles");
        else
            printf("Escaleno");

    } else {
        printf("Nao forma triangulo");
    }

    return 0;
}