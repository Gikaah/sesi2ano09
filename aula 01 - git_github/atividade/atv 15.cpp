#include <stdio.h>

int main() {
    float r, g;

    scanf("%f", &r);

    g = r * 180 / 3.14;

    printf("%.2f", g);

    return 0;
}