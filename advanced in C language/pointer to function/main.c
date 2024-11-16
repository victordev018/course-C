#include <stdio.h>

#define INIT 0
#define END 10

int square(int value) {
    return value * value;
}

void showTableSquare(int (*function)(int)) {
    for (int i = INIT; i < END; i++) {
        printf("| %d | |%d |\n", i, function(i));
    }
}

int main() {

    int (*function)(int) = square;

    showTableSquare(function);      // or showTableSquare(square)
}