#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAMANHO 8

float calcular_media(int *vetor, int tamanho) {
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += *(vetor + i);
    }
    return (float)soma / tamanho;
}

float calcular_desvio_padrao(int *vetor, int tamanho, float media) {
    float soma_quadrados = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma_quadrados += (*(vetor + i) - media) * (*(vetor + i) - media);
    }
    return sqrt(soma_quadrados / tamanho);
}

int main() {
    int *vetor;
    int i;

    vetor = (int *)malloc(TAMANHO * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    printf("Digite os %d números do vetor:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", vetor + i);
    }

    float media = calcular_media(vetor, TAMANHO);
    float desvio_padrao = calcular_desvio_padrao(vetor, TAMANHO, media);

    printf("O desvio-padrão é: %.2f\n", desvio_padrao);

    free(vetor);

    return 0;
}
