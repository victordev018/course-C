
// working with arrays of the pointers

#include <stdio.h>
#include <stdlib.h>

int main(void){

    // creating matrix 3x3 int type with pointers
    int **matrix, rows = 3, columns = 3;

    // allocate 3 space of size 24 bytes to tree int pointers
    matrix = (int **) malloc( rows * sizeof(int *));

    // allocate 3 space of size 4 bytes to tree int pointers
    for (int row = 0; row < columns; row++){
        matrix[row] = (int *) malloc(rows * sizeof(int));
    }

    // fill values
    for (int r = 0; r < rows ; r++){
        for (int c = 0 ; c < columns; c++){
            *(*(matrix+c)+r) = 1 + c;   // equivalence -> matrix[r][c]
        }
    }

    // show values
    for (int r = 0; r < rows ; r++){
        printf("\n[ ");
        for (int c = 0 ; c < columns; c++){
            printf("%d ", *(*(matrix+c)+r));    // equivalence -> matrix[r][c]
        }
        printf("]");
        printf("\n");
    }

    return 0;
}