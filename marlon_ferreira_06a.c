/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 24/02/2024

    Questão 06A
    Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro vetor.
     Os conjuntos têm, no máximo, 20 elementos. 
     Imprima os dois conjuntos de números.

*/

#include <stdio.h>

#define TAMANHO_MAXIMO 20

int main() {
    float vetor[TAMANHO_MAXIMO];
    float vetor_quadrado[TAMANHO_MAXIMO];
    int tamanho = 0;

    // Leitura dos números reais
    printf("Digite os números reais (no máximo 20 elementos, digite 0 para parar):\n");
    float numero;
    while (scanf("%f", &numero) == 1 && tamanho < TAMANHO_MAXIMO && numero != 0) {
        vetor[tamanho] = numero;
        tamanho++;
    }

    // Cálculo dos quadrados e armazenamento no vetor_quadrado
    int i;
    for (i = 0; i < tamanho; i++) {
        vetor_quadrado[i] = vetor[i] * vetor[i];
    }

    // Impressão dos vetores
    printf("Vetor original:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    printf("Vetor dos quadrados:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%.2f ", vetor_quadrado[i]);
    }
    printf("\n");

    return 0;
}
