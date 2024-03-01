/* 
    Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 28/02/2024

    Questão 09A
    Escreva um programa que leia do teclado um vetor de 10 posições. 
    Escreva na tela quantos valores pares foram armazenados nesse vetor. 
*/
#include <stdio.h>
#include <math.h>

#define TAMANHO 8

float calcular_media(int vetor[], int tamanho) {
    int soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (float)soma / tamanho;
}

float calcular_desvio_padrao(int vetor[], int tamanho, float media) {
    float soma_quadrados = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma_quadrados += (vetor[i] - media) * (vetor[i] - media);
    }
    return sqrt(soma_quadrados / tamanho);
}

int main() {
    int vetor[TAMANHO];
    int i;

    printf("Digite os %d números do vetor:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    float media = calcular_media(vetor, TAMANHO);
    float desvio_padrao = calcular_desvio_padrao(vetor, TAMANHO, media);

    printf("O desvio-padrão é: %.2f\n", desvio_padrao);

    return 0;
}
