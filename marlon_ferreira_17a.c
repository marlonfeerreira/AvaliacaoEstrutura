/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 05/03/2024

    Questão 17A
    Escreva um programa que leia uma string do teclado e converta todos os seus caracteres em maiúscula.

*/
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Converte cada caractere para maiúscula
    for (int i = 0; string[i] != '\0'; i++) {
        string[i] = toupper(string[i]);
    }

    // Imprime a string em maiúscula
    printf("String em maiúscula: %s\n", string);

    return 0;
}
