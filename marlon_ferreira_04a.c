#include <stdio.h>

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
