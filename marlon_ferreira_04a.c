#include <stdio.h>
/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 24/02/2024

    Questão 04A
    Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. 
    Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.


*/

#define TAMANHO 10

int main() {
    int A[TAMANHO], B[TAMANHO], C[TAMANHO];
    int i;

    printf("Digite os elementos do array A com 10 números inteiros:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &A[i]);
    }

    printf("Digite os elementos do array B com 10 números inteiros:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &B[i]);
    }

    printf("Array C = A - B:\n");

    for (i = 0; i < TAMANHO; i++) {
        C[i] = A[i] - B[i];
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
