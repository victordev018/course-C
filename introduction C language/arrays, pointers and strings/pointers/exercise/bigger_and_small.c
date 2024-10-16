
/*
Escreva um procedimento que receba um vetor inteiro, seu tamanho e os endereços de duas
variáveis inteiras, menor e maior, salve nestas variáveis o menor e o maior valor do vetor.
*/

#include <stdio.h>

void getBiggerAndSmaller(int vector[],int sizeVector, int *bigger, int *small){

    *bigger = *vector;
    *small = *vector;

    for (int i = 0; i < sizeVector; i++){
        int current = *(vector+i);      // vector[i]

        // get bigger
        if (current > *bigger){
            *bigger = current;
        }

        // get small
        if (current < *small){
            *small = current;
        }
    }
}

int main()
{

    // creating vector of integers
    int vector[] = {1, 4, 7, 99, 2, 10};

    // size vector 
    int size = sizeof(vector) / sizeof(vector[0]);

    // variables to store the largest and smallest values
    int bigger, smaller;

    getBiggerAndSmaller(vector, size, &bigger, &smaller); 

    // show values
    printf("\n| -> bigger: %d", bigger);
    printf("\n| -> smaller: %d\n\n", smaller);

}
