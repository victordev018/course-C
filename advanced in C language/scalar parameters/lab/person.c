/* 
Escreva um programa que crie os primeiros nomes e sobrenomes de quatro pessoas e então os imprima. 
Crie a estrutura apropriada.

Em seguida, crie uma variável para cada pessoa e inicialize seus valores com um valor constante 
(do código - não interaja com o usuário dessa vez).

Por fim, imprima cada um deles em uma linha separada.

Sua versão do programa deve imprimir o mesmo resultado que a saída esperada.
*/

#include <stdio.h>
#include <stdlib.h>


typedef struct{

    char firstName[10];
    char lastName[10];

}Person;

// function to show person data
void showPerson(Person p){
    printf("\n| -> full name: %s%s\n", p.firstName, p.lastName);
}

int main()
{

    // creating persons
    Person p1 = {"Mary", "Smith"};
    Person p2 = {"James ", "Johnson"};
    Person p3 = {"Patricia ", "Williams"};
    Person p4 = {"John", "Brown"};

    // show persons
    showPerson(p1);
    showPerson(p2);
    showPerson(p3);
    showPerson(p4);

    return 0;
}