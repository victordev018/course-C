
// working with string manipulation

#include <stdio.h>
#include <string.h>

int main(void)
{

    // declaration of the string
    char *fruit = "Apple";

    int size = strlen(fruit);

    // get size of string
    printf("\n| -> size: %d\n", size);

    // corresponding to the substring
    char *text;
    strncpy(text, "12345", 3);

    printf("| -> %s", text);      // out: 123


    return 0;
}