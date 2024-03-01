#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int i, j, num;

    printf("Digite 10 números diferentes:\n");

    // Leitura dos números diferentes
    for (i = 0; i < TAMANHO; i++) {
        do {
            scanf("%d", &num);
            // Verifica se o número já foi digitado anteriormente
            for (j = 0; j < i; j++) {
                if (vetor[j] == num) {
                    printf("Número já digitado. Por favor, digite outro número:\n");
                    num = -1; // Definindo um valor diferente para forçar a entrada de um novo número
                    break;
                }
            }
        } while (num == -1); // Loop até o usuário digitar um número válido
        vetor[i] = num;

        // Imprime o vetor atualizado
        printf("(");
        for (j = 0; j <= i; j++) {
            printf("%d", vetor[j]);
            if (j < i) {
                printf(", ");
            }
        }
        printf(")\n");
    }

    return 0;
}