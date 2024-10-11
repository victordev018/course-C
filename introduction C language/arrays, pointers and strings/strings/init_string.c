
// methods to store string

#include <stdio.h>
#include <string.h> 

int main(void)
{

    char name[] = "Joao";       // last element is '\0', size = 4
    char name2[5] = "Carro";    // size = 5

    char name3[20];
    strcpy( name3, "Jotadev");

    printf("name 3: %s", name3);

    return 0;
}
