/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 29/02/2024

    Questão 14B
   Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável.
    Em seguida, imprima a string invertida.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *string;
    int length = 0;

    // Alocação de memória para a string
    string = (char *)malloc(100 * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Calcula o comprimento da string
    while (*(string + length) != '\0') {
        length++;
    }

    // Imprime o comprimento da string
    printf("A string possui %d caracteres.\n", length);

    // Liberar memória alocada
    free(string);

    return 0;
}
