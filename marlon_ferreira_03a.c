#include <stdio.h>

#define TAMANHO 10

int main() {
    float vetor[TAMANHO];
    int i;
    int qtdNegativos = 0;
    float somaPositivos = 0;

    printf("Digite os 10 números reais:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        if (vetor[i] < 0) {
            qtdNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
