/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 28/02/2024

    Questão 12B
   Faça um programa que leia uma string e imprima as quatro primeiras letras dela. 

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *string;
    int i;

    // Alocação de memória para a string
    string = (char *)malloc(100 * sizeof(char));

    // Entrada de dados
    printf("Digite uma string: ");
    scanf("%s", string);

    // Imprime as quatro primeiras letras
    printf("As quatro primeiras letras da string são: ");
    for (i = 0; i < 4; i++) {
        printf("%c", *(string + i));
    }
    printf("\n");

    // Liberar memória alocada
    free(string);

    return 0;
}
