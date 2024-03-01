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