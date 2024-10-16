
/*
Crie um programa que contenha um array de inteiros com 10 elementos. Imprima o elemento e o
endereço de cada posição do array.
*/

#include <stdio.h>

void showValueWithAddress(int vector[], int size){

    for (int i = 0; i < size; i++){

        printf("\n| value: %d", *(vector+i));   // vector[i]
        printf("\n| address: %p\n", (vector+i));  

    }

}

int main()
{

    // creating vector of the size 10
    int vector[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(vector) / sizeof(vector[0]);

    // showing values and your address
    showValueWithAddress(vector, size);

    return 0;
}