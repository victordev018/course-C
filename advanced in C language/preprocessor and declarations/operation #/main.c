#include <stdio.h>

#define SHOW(variable) printf("\nvariable: "#variable" =  %d", variable);

int main() {

    int age = 19, day = 17;

    SHOW(age);
    SHOW(day);
}