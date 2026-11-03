#include <stdio.h>

int main() {
    float nota;
    float soma = 0;
    float media;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Cliente %d - nota (0 a 10): ", i);
        scanf("%f", &nota);

        soma = soma + nota;
    }

    media = soma / 10;
    printf("\nNota media: %.2f\n", media);

    if (media < 7) {
        printf("ATENCAO: a media esta abaixo de 7!\n");
    } else {
        printf("A media e 7 ou mais.\n");
    }

    return 0;
}
