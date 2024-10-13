/*
Escreva um programa que peça ao usuário para digitar um número e imprima a qual dia da semana esse 
número corresponde. Os dias são indexados de 0 (domingo) a 6 (sábado).

Armazene os nomes dos dias em uma matriz e imprima o nome do dia de duas maneiras:

com aritmética de ponteiro;
com indexação de matriz.
Antes que o programa obtenha um valor do array, ele deve primeiro verificar se o dia fornecido é maior
 ou igual a zero e menor que 7. Caso contrário, ele deve imprimir a mensagem:Erro, esse dia não existe..

Sua versão do programa deve imprimir o mesmo resultado que a saída esperada.
*/

#include <stdio.h>

int main(void)
{

    // vector with days of week
    char days[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int dayNumber;

    // read day number
    printf("\n|> enter a day number (0-6): ");
    scanf("%d", &dayNumber);

    if (dayNumber < 0 || dayNumber > 6){
        printf("\n| -> Error, no such day.\n");
        return 1;
    }

    printf("\n| -> Pointer version: %s", *(days+dayNumber));
    printf("\n| -> Array index version: %s\n\n", days[dayNumber]);

    return 0;
}