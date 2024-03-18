/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 28/02/2024

    Questão 11B
   Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros.
    Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
     Exiba na tela esse array. 


*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main() {
    int **matriz;
    int *vetorSoma;
    
    // Alocação de memória para a matriz
    matriz = (int **)malloc(SIZE * sizeof(int *));
    for (int i = 0; i < SIZE; i++) {
        matriz[i] = (int *)malloc(SIZE * sizeof(int));
    }
    
    // Alocação de memória para o vetor de soma
    vetorSoma = (int *)malloc(SIZE * sizeof(int));

    // Entrada de dados
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma das colunas
    for (int j = 0; j < SIZE; j++) {
        vetorSoma[j] = 0; // Zera o vetor de soma para cada nova coluna
        for (int i = 0; i < SIZE; i++) {
            vetorSoma[j] += matriz[i][j];
        }
    }

    // Exibe o vetor de soma
    printf("O vetor de soma das colunas é: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetorSoma[i]);
    }
    printf("\n");

    // Liberar memória alocada
    for (int i = 0; i < SIZE; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(vetorSoma);

    return 0;
}
