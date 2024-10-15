
// i understanding access to variable value

#include <stdio.h>
#include <stdlib.h>

void increaseValue1(int value){
    value++;    // change the copy value
}

void increaseValue2(int *pointerToValue){
    (*pointerToValue)++;    // change the real value
}

int main(){

    int value = 10;

    increaseValue1(value);
    printf("\nvalue: %d\n ", value);    // out: 10

    increaseValue2(&value);
    printf("\nvalue: %d\n ", value);    // out: 11


    return 0;
}