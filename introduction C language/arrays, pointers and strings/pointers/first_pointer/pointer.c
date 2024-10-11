
// pointers are used to store the information about location (address) of any other data

#include <stdio.h>

int main(void)
{

    // creating integer type pointer variable
    // will be used to store information about the location of data of type Integer

    int *p;

    // We can assign the pointer a value that points to any already existing variable.
    int number = 10;

    p = &number;  // now p points to the memory address where the value 10 is stored;

    return 0;
}