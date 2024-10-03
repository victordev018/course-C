// working with the switch case conditional structure

#include <stdio.h>

int main()
{

    // day of the week
    int day = 6;

    // checking the day of the week
    switch (day) {
        case 1:
            puts("Sunday");
            break;
        case 2:
            puts("Monday");
            break;
        case 3:
            puts("Tuesday");
            break;
        case 4:
            puts("Wednesday");
            break;
        case 5:
            puts("Thursday");
            break;
        case 6:
            puts("Friday");
            break;
        case 7:
            puts("Saturday");
            break;
        default:
            puts("Value invalid");
    }

    return 0;
}