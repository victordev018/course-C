// counter numbers and get larger number

#include <stdio.h>

int main(void)
{

    // variables
    int currentNumber;
    int larger = -10000;
    int count = 0;

    do{

        // read number
        scanf("%d", &currentNumber);

        // get larger
        if (currentNumber != -1){

            // increase count
            count++;

            // check if current number is the larger
            if (currentNumber > larger){
                larger = currentNumber;
            }
        }

    }
    while(currentNumber != -1);

    // if you have entered at least one number
    if (count){
        printf("\n| the larger number is: %d" , larger);
    }
    else{
        puts("\n| no value entered!\n\n");
    }

    return 0;
}