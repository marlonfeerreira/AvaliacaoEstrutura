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

    Questão 05A
<<<<<<< HEAD
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
*/
=======
    Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais que não são múltiplos de 7.
     Ao final, imprima esse vetor na tela.

*/

>>>>>>> f8c46441a75b56612f2ee4045f96ad23747e2274
#include <stdio.h>

#define TAMANHO 100

int main() {
    int vetor[TAMANHO];
    int numero = 1; // Começando a partir do primeiro número natural

    // Preenchendo o vetor com os 100 primeiros números naturais não múltiplos de 7
    int i, j;
    for (i = 0; i < TAMANHO; i++) {
        // Enquanto o número for múltiplo de 7, continue procurando
        while (numero % 7 == 0) {
            numero++;
        }
        vetor[i] = numero;
        numero++;
    }

    // Imprimindo o vetor na tela
    printf("Vetor de tamanho %d com os 100 primeiros números naturais que não são múltiplos de 7:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
