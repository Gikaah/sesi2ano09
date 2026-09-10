#include <stdio.h>

int main() {
    int segundos, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);

    return 0;
}