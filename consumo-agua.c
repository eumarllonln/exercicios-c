#include <stdio.h>
int main() {
    float soma = 0;
    float consumo;
    float media;
    int i;

    for(i=1; i<=5; i++) {
        printf("Residência %d - consumo de água (m3): ", i);
        scanf("%f", &consumo);
        soma = soma + consumo;
        if (consumo <= 20 ) {
            printf("Residência %d: dentro da média\n", i);
        } else {
            printf("Residência %d: acima da média\n", i);
        }

    }
    media = soma / 5;
    printf("\nMédia geral: %.2f m3", media);
    
    return 0;
}