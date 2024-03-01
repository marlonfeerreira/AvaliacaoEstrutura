
/* 
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Jobson Tenório do Nascimento
    Data: 23/02/2024

    Questão 02B
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
*/
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main() {
    int *vetor;
    int i;
    int maior, menor;

    vetor = (int *)malloc(TAMANHO * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    printf("Digite os elementos do vetor X com 10 posições:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", vetor + i);
    }

    maior = *vetor;
    menor = *vetor;

    for (i = 1; i < TAMANHO; i++) {
        if (*(vetor + i) > maior) {
            maior = *(vetor + i);
        }
        if (*(vetor + i) < menor) {
            menor = *(vetor + i);
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    free(vetor);

    return 0;
}
