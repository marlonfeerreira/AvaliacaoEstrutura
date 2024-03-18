/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 29/03/2024

    Questão 20A
    O código de César é uma das técnicas de cifragem mais simples e conhecidas.
     É um tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto.
      Por exemplo, com uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante. 
      Escreva um programa que faça uso desse código de César para três posições. Entre com uma string e imprima a string codificada.

*/
#include <stdio.h>

#define MAX_LENGTH 100

void codificarCesar(char string[], int deslocamento) {
    int i = 0;

    // Percorre a string
    while (string[i] != '\0') {
        // Verifica se é uma letra maiúscula
        if (string[i] >= 'A' && string[i] <= 'Z') {
            // Realiza a codificação de César
            string[i] = ((string[i] - 'A' + deslocamento) % 26) + 'A';
        }
        // Verifica se é uma letra minúscula
        else if (string[i] >= 'a' && string[i] <= 'z') {
            // Realiza a codificação de César
            string[i] = ((string[i] - 'a' + deslocamento) % 26) + 'a';
        }
        i++;
    }
}

int main() {
    char string[MAX_LENGTH];
    
    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Codifica a string usando o código de César com deslocamento de três posições
    codificarCesar(string, 3);

    // Imprime a string codificada
    printf("String codificada: %s\n", string);

    return 0;
}
