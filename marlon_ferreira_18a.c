/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 10/03/2024

    Questão 18A
    Escreva um programa que recebe uma string S e dois valores inteiros não negativos i e j.
    Em seguida, imprima os caracteres contidos no segmento que vai de i a j da string S.

*/

#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    int i, j;

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);
    printf("Digite os valores de i e j (não negativos): ");
    scanf("%d %d", &i, &j);

    // Imprime os caracteres do segmento de i a j
    printf("Segmento de i a j: ");
    for (int k = i; k <= j; k++) {
        printf("%c", string[k]);
    }
    printf("\n");

    return 0;
}
