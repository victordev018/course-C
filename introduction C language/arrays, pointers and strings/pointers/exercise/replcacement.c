
/*
Escreva um procedimento que troca os valores dos parâmetros recebidos. Sua assinatura deve
ser: void troca(float *a, float *b);
*/

#include <stdio.h>

void replacement(int *value1, int *value2){

    int aux = *value1;
    *value1 = *value2;
    *value2 = aux;

}

void showValues(int a, int b){
    printf("\n| -> value 1: %d\n| -> value 2: %d\n", a, b);
}

int main()
{

    int v1 = 10, v2 = 20;

    // showing values ​​before exchanging
    showValues(v1, v2);

    // exchanging values
    replacement(&v1, &v2);

    // showing value after exchanging
    showValues(v1, v2);

    return 0;
}   