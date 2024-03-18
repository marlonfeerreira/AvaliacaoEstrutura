/*
 Instituição: IFPE Campus Belo Jardim
    Componente Curricular: CCBJ.14 - Algoritmos e Estrutura de Dados
    Estudante: Marlon Ferreira da Silva
    Data: 21/03/2024

    Questão 19A
    Construa um programa que leia duas strings do teclado.
    Imprima uma mensagem informando se a segunda string lida está contida dentro da primeira.


*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char string1[MAX_LENGTH];
    char string2[MAX_LENGTH];
    bool contida = false;

    // Entrada de dados
    printf("Digite a primeira string: ");
    scanf("%s", string1);
    printf("Digite a segunda string: ");
    scanf("%s", string2);

    // Verifica se a segunda string está contida na primeira
    if (strstr(string1, string2) != NULL) {
        contida = true;
    }

    // Imprime mensagem de acordo com o resultado
    if (contida)
        printf("A segunda string está contida na primeira.\n");
    else
        printf("A segunda string não está contida na primeira.\n");

    return 0;
}
