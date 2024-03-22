<<<<<<< HEAD
/* 
    Instituição: IFPE Campus Belo Jardim
=======

/*
 Instituição: IFPE Campus Belo Jardim
>>>>>>> f8c46441a75b56612f2ee4045f96ad23747e2274
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 24/02/2024

<<<<<<< HEAD
    Questão 04A
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
=======
    Questão 04B
    Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada. 
    Crie um novo array C calculando C = A − B. Mostre na tela os dados do array C.


>>>>>>> f8c46441a75b56612f2ee4045f96ad23747e2274
*/
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10

int main() {
    int *A, *B, *C;
    int i;

    A = (int *)malloc(TAMANHO * sizeof(int));
    B = (int *)malloc(TAMANHO * sizeof(int));
    C = (int *)malloc(TAMANHO * sizeof(int));

    if (A == NULL || B == NULL || C == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    printf("Digite os elementos do array A com 10 números inteiros:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", A + i);
    }

    printf("Digite os elementos do array B com 10 números inteiros:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", B + i);
    }

    printf("Array C = A - B:\n");

    for (i = 0; i < TAMANHO; i++) {
        *(C + i) = *(A + i) - *(B + i);
        printf("%d ", *(C + i));
    }
    printf("\n");

    free(A);
    free(B);
    free(C);

    return 0;
}
