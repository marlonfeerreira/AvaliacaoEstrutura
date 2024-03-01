#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i, j;
    int encontrado = 0;

    printf("Digite os elementos do vetor com 10 posições:\n");

    // Leitura dos elementos do vetor
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    // Verificação de valores iguais e escrita na tela
    printf("Valores iguais: ");
    for (i = 0; i < TAMANHO; i++) {
        for (j = i + 1; j < TAMANHO; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d ", vetor[i]);
                encontrado = 1;
                break;
            }
        }
    }

    if (!encontrado) {
        printf("Nenhum valor igual encontrado.");
    }

    printf("\n");

    return 0;
}
