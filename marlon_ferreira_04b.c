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
