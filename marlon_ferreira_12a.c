/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 28/02/2024

    Questão 12A
   Faça um programa que leia uma string e imprima as quatro primeiras letras dela. 

*/

#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Imprime as quatro primeiras letras
    printf("As quatro primeiras letras da string são: ");
    for (int i = 0; i < 4; i++) {
        printf("%c", string[i]);
    }
    printf("\n");

    return 0;
}
