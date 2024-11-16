#include <stdio.h>

#define MAX 50

#define SHOW(value) printf("%d ", value);

int main() {

    int array[MAX], i;     // replace 'MAX' to 50

    for (i = 0; i < MAX ; i++) {
        array[i] = i * 1;
    }

    for (i = 0; i < MAX ; i++) {
        SHOW(array[i]);
    }
}