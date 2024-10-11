
// LAB -> fibonacci exercise

#include <stdio.h>

// function to filled fibonacci vector
void fillVectorFibonacci(int list[],int finish){
    
    if (finish > 0)
        list[0] = 0;

    if (finish > 1)
        list[1] = 1;
    
    for (int i = 2; i < finish; i++){
        int current = list[i-2] + list[i-1];
        list[i] = current;
    }
}

int main(void)
{

    // initialized fibonacci vector
    int fibonacci[10];
    int size = sizeof(fibonacci) / sizeof(fibonacci[0]);

    // fill fibonacci vector
    fillVectorFibonacci(fibonacci, size);

    // show all values
    printf("\n| all values: \n");
    for (int i = 0; i < size ; i++){
        printf("| -> %d\n", fibonacci[i]);
    }

    // showing two by two
    printf("\n| two by two: \n");
    for (int i = 0; i < size ; i+=2){
        printf("| -> %d\n", fibonacci[i]);
    }

    // showing only pairs
    printf("\n| inly pairs: \n");
    for (int i = 0; i < size ; i++){
        int current = fibonacci[i];
        if (!(current % 2))
            printf("| -> %d\n", current);
    }

    return 0;
}