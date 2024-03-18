/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 28/02/2024

    Questão 11A
   Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números inteiros.
    Em seguida, calcule um vetor contendo três posições, em que cada posição deverá armazenar a soma dos números de cada coluna da matriz.
     Exiba na tela esse array. 


*/

#include <stdio.h>

#define SIZE 3

int main() {
    int matriz[SIZE][SIZE];
    int vetorSoma[SIZE] = {0}; // Inicializa o vetor de soma com zeros
    
    // Entrada de dados
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma das colunas
    for (int j = 0; j < SIZE; j++) {
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

    return 0;
}
