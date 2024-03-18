
/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 24/02/2024

    Questão 07B
    Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais e os escreva na tela.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main() {
    int *vetor;
    int i, j;
    int encontrado = 0;

    vetor = (int *)malloc(TAMANHO * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    printf("Digite os elementos do vetor com 10 posições:\n");

    // Leitura dos elementos do vetor
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", vetor + i);
    }

    // Verificação de valores iguais e escrita na tela
    printf("Valores iguais: ");
    for (i = 0; i < TAMANHO; i++) {
        for (j = i + 1; j < TAMANHO; j++) {
            if (*(vetor + i) == *(vetor + j)) {
                printf("%d ", *(vetor + i));
                encontrado = 1;
                break;
            }
        }
    }

    if (!encontrado) {
        printf("Nenhum valor igual encontrado.");
    }

    printf("\n");

    free(vetor);

    return 0;
}
