/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 05/03/2024

    Questão 16A
    Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. 
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. 
    Ao final, imprima a nova string e o número de vogais que ela possui.

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    int length;
    bool palindromo = true;

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Calcula o comprimento da string
    length = strlen(string);

    // Verifica se é palíndromo
    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            palindromo = false;
            break;
        }
    }

    // Imprime mensagem de acordo com o resultado
    if (palindromo)
        printf("A string é um palíndromo.\n");
    else
        printf("A string não é um palíndromo.\n");

    return 0;
}
