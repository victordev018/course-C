// data entry in c and use of the math.h library

#include <stdio.h>
#include <math.h>

int main(void) 
{
    printf("%d", 0x8);
    // variables
    float value, square;

    // data entry
    puts("\n> enter a float value: ");
    scanf("%f", &value);

    // process value
    square = sqrt(value);

    // output
    printf("\n| reported value: %.1f\n| square: %.1f", value, square);

    return 0;
}