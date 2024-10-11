/*
Escreva um programa que peça ao usuário para fornecer quatro nomes e os imprima em ordem reversa. Por enquanto
, suponha que cada nome consiste em um máximo de 20 letras.

Como você provavelmente ainda não sabe sobre arrays multidimensionais, use quatro variáveis. Mais tarde, você 
deve armazenar dados desse tipo em um array 2D (ou um tipo de dado mais avançado).

Sua versão do programa deve imprimir o mesmo resultado que a saída esperada.
*/

#include <stdio.h>

int main(void)
{

    // initialized vector for 4 words of the size 20 characters
    char names[4][20];

    // entry names
    for (int i = 0; i < 4; i++){
        scanf("%s", names[i]);
    }

    // showing names from last to first
    puts("\n| names:\n");
    for (int current = 3; current >= 0; current--){
        printf("| -> %s\n", names[current]);
    }

    return 0;
}