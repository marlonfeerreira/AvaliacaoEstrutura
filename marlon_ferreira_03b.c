/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 23/02/2024

    Questão 03B
    Faça um programa que preencha um vetor com 10 números reais. 
    Em seguida, calcule e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main() {
    float *vetor;
    int i;
    int qtdNegativos = 0;
    float somaPositivos = 0;

    vetor = (float *)malloc(TAMANHO * sizeof(float));
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    printf("Digite os 10 números reais:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", vetor + i);
    }

    for (i = 0; i < TAMANHO; i++) {
        if (*(vetor + i) < 0) {
            qtdNegativos++;
        } else {
            somaPositivos += *(vetor + i);
        }
    }

    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    free(vetor);

    return 0;
}
