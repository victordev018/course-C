// working with for loop structure

#include <stdio.h>

int main(void)
{

    // variables
    int init, last;

    // show numbers in range
    puts("\n| enter with a initial value: ");
    scanf("%d", &init);

    puts("\n| enter with a last value: ");
    scanf("%d", &last);

    // loop
    for (int i = init; i <= last; i++){
        printf("%d\n", i);
    }

    return 0;
}