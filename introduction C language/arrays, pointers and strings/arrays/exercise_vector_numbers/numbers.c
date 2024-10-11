
// working with creating vectors of numbers

#include <stdio.h>

// function to show vector
void showVector(int vector[], int size, char message[]){
    printf("\n| %s\n", message);
    for (int i = 0; i < size ; i++){
        printf("| ->  %d\n", vector[i]);
    }
}

int main(void)
{

    // vector of size 5 filled with 0
    int vector1[5] = {0};
    int size1 = sizeof(vector1) / sizeof(vector1[0]);
    showVector(vector1, size1, "vector 1:");

    // vector of size 5 filled with random values
    int vector2[5] = {33, 8, 9, 9, 0};
    int size2 = sizeof(vector2) / sizeof(vector2[0]);
    showVector(vector2, size2, "vector 2:");

    return 0;
}