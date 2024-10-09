/*
A maneira mais popular e legível para humanos de escrever um IP (para ser preciso, IPv4) é escrever quatro números separados 
por pontos (por exemplo, 127.0.0.1 ). Mas um endereço IP também pode ser escrito como um número de 32 bits.

Para obter este formato, você deve multiplicar todas as partes do número IP por potências de 256 (256*256*256, 256*256, 256 
e 1 - não use versões pré-calculadas).

Escreva um programa que peça ao usuário para fornecer quatro números e, em seguida, verifique se esses números são maiores 
ou iguais a 0 e menores ou iguais a 255.

Em seguida, o programa deve escrever ambas as formas do endereço IP: a legível por humanos e a de 32 bits, o número um.

Use o tipo unsigned long int ; para imprimi-lo, use o"%lu"formato noimprimirffunção.

Se alguma parte do endereço não atender aos critérios fornecidos (0<=x<=255), imprima apenas esta mensagem de erro 
simples:Endereço IP incorreto..

Sua versão do programa deve imprimir o mesmo resultado que a saída esperada.
*/

#include <stdio.h>

int main(void){

    int number1, number2, number3, number4;
    
    // requesting and reading numbers from the ip address
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);
    scanf("%d", &number4);

    // checking if all values are valid
    if ((number1 > -1 && number1 < 256) && 
    (number2 > -1 && number2 < 256) && 
    (number3 > -1 && number3 < 256) && 
    (number4 > -1 && number4 < 256)){

        printf("\n| Human-readable IP address is: %d.%d.%d.%d", number1, number2, number3, number4);

        // calculating number of the 32 bits
        int number32bits = number1 * 256 * 256 * 256;
        number32bits += number2 * 256 * 256;
        number32bits += number3 * 256;
        number32bits += number4;

        printf("\n| IP address as a 23-bit number: %d", number32bits);
    }
    else{
        printf("\n| Incorrect IP address!");
    }

    return 0;
}