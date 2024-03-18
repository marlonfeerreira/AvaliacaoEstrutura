/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 03/03/2024

    Questão 15A
    Leia uma string do teclado e conte quantas vogais (a, e, i, o, u) ela possui. 
    Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere. 
    Ao final, imprima a nova string e o número de vogais que ela possui.

*/
#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    char substituto;
    int vogais = 0;

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Conta o número de vogais e substitui vogais
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &substituto); // O espaço em branco antes de %c ignora espaços em branco no buffer

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u') {
            vogais++;
            string[i] = substituto;
        }
    }

    // Imprime a nova string e o número de vogais
    printf("%s\n", string);
    printf("%d vogais\n", vogais);

    return 0;
}
