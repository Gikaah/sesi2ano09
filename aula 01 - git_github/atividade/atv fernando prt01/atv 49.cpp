#include <stdio.h>

int main() {
    int hora, minuto, segundo, duracao;
    int total;

    scanf("%d %d %d", &hora, &minuto, &segundo);
    scanf("%d", &duracao);

    total = hora * 3600 + minuto * 60 + segundo + duracao;

    total = total % 86400;

    hora = total / 3600;
    minuto = (total % 3600) / 60;
    segundo = total % 60;

    printf("%02d:%02d:%02d", hora, minuto, segundo);

    return 0;
}