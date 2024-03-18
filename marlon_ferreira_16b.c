/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 05/03/2024

    Questão 16B
    Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. 
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. 
    Ao final, imprima a nova string e o número de vogais que ela possui.

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main() {
    char *string;
    int length;
    bool palindromo = true;

    // Alocação de memória para a string
    string = (char *)malloc(MAX_LENGTH * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Calcula o comprimento da string
    length = strlen(string);

    // Verifica se é palíndromo
    char *ptr_begin = string;
    char *ptr_end = string + length - 1;
    while (ptr_begin < ptr_end) {
        if (*ptr_begin != *ptr_end) {
            palindromo = false;
            break;
        }
        ptr_begin++;
        ptr_end--;
    }

    // Imprime mensagem de acordo com o resultado
    if (palindromo)
        printf("A string é um palíndromo.\n");
    else
        printf("A string não é um palíndromo.\n");

    // Liberar memória alocada
    free(string);

    return 0;
}
