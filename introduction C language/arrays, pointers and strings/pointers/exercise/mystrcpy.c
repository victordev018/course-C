
/*
Implemente a função strcpy (char *destino, char *origem) usando ponteiros.
*/

#include <stdio.h>

// function for copy string to variable
void myStringCopy(char *destiny, char *source){

    for (; *source; destiny++, source++){
        *destiny = *source;    // destiny[i] = source[i];
    }
    *destiny = '\0';
} 

int main()
{

    char name[200];

    myStringCopy(name, "eita xama danado da peste");
    printf("\n| -> name: %s\n", name);

    myStringCopy(name, "Mario");
    printf("\n| -> name: %s\n", name);

    return 0;
}