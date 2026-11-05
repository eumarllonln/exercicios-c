#include <stdio.h>
int main() {
    float soma = 0;
    float consumo;
    float media;
    int i;

    for(i=1; i<=5; i++) {
        printf("Residencia %d - consumo de agua (m3): ", i);
        scanf("%f", &consumo);
        soma = soma + consumo;
        if (consumo <= 20 ) {
            printf("Residencia %d: dentro da media\n", i);
        } else {
            printf("Residencia %d: acima da media\n", i);
        }

    }
    media = soma / 5;
    printf("\nMedia geral: %.2f m3", media);

    return 0;
}
