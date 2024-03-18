/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 03/03/2024

    Questão 15B
    Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. 
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. 
    Ao final, imprima a nova string e o número de vogais que ela possui.

*/
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

int main() {
    char *string;
    char substituto;
    int vogais = 0;

    // Alocação de memória para a string
    string = (char *)malloc(MAX_LENGTH * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Conta o número de vogais e substitui vogais
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &substituto);

    char *ptr = string;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u') {
            vogais++;
            *ptr = substituto;
        }
        ptr++;
    }

    // Imprime a nova string e o número de vogais
    printf("%s\n", string);
    printf("%d vogais\n", vogais);

    // Liberar memória alocada
    free(string);

    return 0;
}
