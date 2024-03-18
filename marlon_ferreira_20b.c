/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 29/03/2024

    Questão 20B
    O código de César é uma das técnicas de cifragem mais simples e conhecidas.
     É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto.
      Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante. 
      Escreva um programa que faça uso desse código de César para três posições. Entre com uma string e imprima a string codificada.

*/
#include <stdio.h>
#include <stdlib.h>

void codificarCesar(char *string, int deslocamento) {
    // Percorre a string
    while (*string != '\0') {
        // Verifica se é uma letra maiúscula
        if (*string >= 'A' && *string <= 'Z') {
            // Realiza a codificação de César
            *string = ((*string - 'A' + deslocamento) % 26) + 'A';
        }
        // Verifica se é uma letra minúscula
        else if (*string >= 'a' && *string <= 'z') {
            // Realiza a codificação de César
            *string = ((*string - 'a' + deslocamento) % 26) + 'a';
        }
        string++;
    }
}

int main() {
    char *string;

    // Alocação de memória para a string
    string = (char *)malloc(100 * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Codifica a string usando o código de César com deslocamento de três posições
    codificarCesar(string, 3);

    // Imprime a string codificada
    printf("String codificada: %s\n", string);

    // Liberar memória alocada
    free(string);

    return 0;
}
