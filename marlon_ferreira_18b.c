/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 10/03/2024

    Questão 18B
    Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j.
    Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.

*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char *string;
    int i, j;

    // Alocação de memória para a string
    string = (char *)malloc(MAX_LENGTH * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);
    printf("Digite os valores de i e j (não negativos): ");
    scanf("%d %d", &i, &j);

    // Imprime os caracteres do segmento de i a j
    printf("Segmento de i a j: ");
    char *ptr = string + i;
    for (int k = i; k <= j; k++) {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    // Liberar memória alocada
    free(string);

    return 0;
}
