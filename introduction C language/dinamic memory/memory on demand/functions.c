
#include <stdio.h>
#include <stdlib.h>     // standar libray of the C language

int main(void){

    // function for dynamic memory allocation

    // void *malloc(int size) 
    // -> in case of success, return an void pointer
    // -> in other case, return NULL

    // function for free the allocated memory

    // void free(void *pointer)
    
    // using functions 

    int *pointer;

    pointer = (int *) malloc(sizeof(int));

    if(pointer){
        // memory was allocated successfully, storing 100 in address
        *pointer = 100;
        printf("\n| - value in address of the pointer: %d", *pointer);
    }
    else{
        printf("\n| - failed to allocate memory");
    }

    // freeing memory again
    free(pointer);

    return 0;
}