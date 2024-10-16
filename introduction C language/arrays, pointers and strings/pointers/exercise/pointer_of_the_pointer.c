
/*
Considere a seguinte declaração: int A, *B, **C, ***D
Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quádruplo desse
valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C
o triplo e D o quádruplo.
*/

#include <stdio.h>

int main()
{

    int A, *B = &A, **C = &B, ***D = &C;

    printf("\n> enter int value: ");
    scanf("%d", &A);

    // processing values
    printf("\n| double: %d", *B * 2);
    printf("\n| triple: %d", **C * 3);
    printf("\n| quad: %d", ***D * 4);
    
    return 0;
}