/* 
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 24/02/2024

    Questão 05B
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
*/
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 100

int main() {
    int *vetor;
    int numero = 1; // Começando a partir do primeiro número natural

    // Alocação dinâmica de memória para o vetor
    vetor = (int *)malloc(TAMANHO * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    // Preenchendo o vetor com os 100 primeiros números naturais não múltiplos de 7
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        // Enquanto o número for múltiplo de 7, continue procurando
        while (numero % 7 == 0) {
            numero++;
        }
        *(vetor + i) = numero;
        numero++;
    }

    // Imprimindo o vetor na tela
    printf("Vetor de tamanho %d com os 100 primeiros números naturais que não são múltiplos de 7:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", *(vetor + i));
    }
    printf("\n");

    // Liberando a memória alocada para o vetor
    free(vetor);

    return 0;
}
