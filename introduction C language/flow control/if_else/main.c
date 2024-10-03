// working with the if else conditional structure

#include <stdio.h>

int main()
{

    // a student note in algorithm
    float note1, note2, average;

    note1 = 9.0;
    note2 = 10.0;
    average = (note1 + note2) / 2;

    // checking if student is approved
    if (average >= 7.0) {
        printf("\n> Student successfully approved\n");
    }
    else {
        printf("\n> Student not approved...\n");
    }

    return 0;
}