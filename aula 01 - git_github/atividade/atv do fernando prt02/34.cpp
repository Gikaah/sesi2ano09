#include <stdio.h>

int main() {
    float nota;
    int faltas;

    scanf("%f %d", &nota, &faltas);

    if (nota >= 9)
        printf(faltas > 20 ? "B" : "A");
    else if (nota >= 7.5)
        printf(faltas > 20 ? "C" : "B");
    else if (nota >= 5)
        printf(faltas > 20 ? "D" : "C");
    else if (nota >= 4)
        printf(faltas > 20 ? "E" : "D");
    else
        printf("E");

    return 0;
}