/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 29/02/2024

    Questão 14A
   Faça um programa que leia uma string e a inverta. A string invertida deve ser armazenada na mesma variável.
    Em seguida, imprima a string invertida.

*/
#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    int length = 0;

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Calcula o comprimento da string
    while (string[length] != '\0') {
        length++;
    }

    // Imprime o comprimento da string
    printf("A string possui %d caracteres.\n", length);

    return 0;
}
