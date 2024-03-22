<<<<<<< HEAD

/* 
    Instituição: IFPE Campus Belo Jardim
=======
/*
 Instituição: IFPE Campus Belo Jardim
>>>>>>> f8c46441a75b56612f2ee4045f96ad23747e2274
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 23/02/2024

    Questão 02A
<<<<<<< HEAD
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
=======
    Faça um programa que receba do usuário um vetor X com 10 posições. 
    Em seguida deverão ser impressos o maior e o menor elemento desse vetor. 
>>>>>>> f8c46441a75b56612f2ee4045f96ad23747e2274
*/

#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i;
    int maior, menor;

    printf("Digite os elementos do vetor X com 10 posições:\n");

    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (i = 1; i < TAMANHO; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
