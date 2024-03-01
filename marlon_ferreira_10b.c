#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

void ordenar_vetor(float *vetor, int tamanho) {
    int i, j;
    float temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

int main() {
    float *vetor;
    int i;

    vetor = (float *)malloc(TAMANHO * sizeof(float));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    printf("Digite os %d números do vetor:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", vetor + i);
    }

    ordenar_vetor(vetor, TAMANHO);

    printf("Vetor ordenado:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.1f ", *(vetor + i));
    }
    printf("\n");

    free(vetor);

    return 0;
}
