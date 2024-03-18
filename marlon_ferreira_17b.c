/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 06/03/2024

    Questão 17B
    Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula.

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *string;

    // Alocação de memória para a string
    string = (char *)malloc(100 * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Converte cada caractere para maiúscula
    char *ptr = string;
    while (*ptr != '\0') {
        *ptr = toupper(*ptr);
        ptr++;
    }

    // Imprime a string em maiúscula
    printf("String em maiúscula: %s\n", string);

    // Liberar memória alocada
    free(string);

    return 0;
}
