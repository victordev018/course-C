
// relation between array and pointer

#include <stdio.h>

int main(void)
{

    // creating an array and pointer respectively
    int array[10];
    int *pointer;

    // when calling the array name without specifying an index, we get the address of the first element of the vector
    printf("%d", (array == &array[0]));     // out: 1 (true)


    // storing the address of the first element in the pointer  
    pointer = array;

    return 0;
}