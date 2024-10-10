
// working with character string (cadeia de caracter)

#include <stdio.h>

int main(void)
{

    char name[10];

    // to read a string, we don't need to follow the &
    printf("\n| enter a name: ");
    scanf("%s", name);

    // show informed name
    printf("\n| name: %s", name);

    return 0;
}