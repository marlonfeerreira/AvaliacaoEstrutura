<<<<<<< HEAD
/* 
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 25/02/2024

    Questão 06B
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
*/
=======
/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 24/02/2024

    Questão 06B
    Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro vetor.
     Os conjuntos têm, no máximo, 20 elementos. 
     Imprima os dois conjuntos de números.

*/

>>>>>>> f8c46441a75b56612f2ee4045f96ad23747e2274
#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_MAXIMO 20

int main() {
    float *vetor;
    float *vetor_quadrado;
    int tamanho = 0;

    // Alocação dinâmica de memória para os vetores
    vetor = (float *)malloc(TAMANHO_MAXIMO * sizeof(float));
    vetor_quadrado = (float *)malloc(TAMANHO_MAXIMO * sizeof(float));
    if (vetor == NULL || vetor_quadrado == NULL) {
        printf("Erro de alocação de memória.\n");
        return -1;
    }

    // Leitura dos números reais
    printf("Digite os números reais (no máximo 20 elementos, digite 0 para parar):\n");
    float numero;
    while (scanf("%f", &numero) == 1 && tamanho < TAMANHO_MAXIMO && numero != 0) {
        *(vetor + tamanho) = numero;
        tamanho++;
    }

    // Cálculo dos quadrados e armazenamento no vetor_quadrado
    int i;
    for (i = 0; i < tamanho; i++) {
        *(vetor_quadrado + i) = *(vetor + i) * *(vetor + i);
    }

    // Impressão dos vetores
    printf("Vetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", *(vetor + i));
    }
    printf("\n");

    printf("Vetor dos quadrados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", *(vetor_quadrado + i));
    }
    printf("\n");

    // Liberação da memória alocada
    free(vetor);
    free(vetor_quadrado);

    return 0;
}
