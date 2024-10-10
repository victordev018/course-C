/*
números maiores ou iguais a 1 e menores que 2 -Muito ruim.
números maiores ou iguais a 2 e menores que 3 -Ruim.
números maiores ou iguais a 3 e menores que 4 -Neutro.
números maiores ou iguais a 4 e menores que 5 -Bom.
números maiores ou iguais a 5 e menores que 6 -Muito bom.

*/


#include <stdio.h>

int main()
{

    // variables
    float numberBeforeTransformation;
    int numberAfterTransformation;
	
    // enter with a float number 
    puts("\n|> enter with a float number: ");
    scanf("%f", &numberBeforeTransformation);

    // processing number
    numberAfterTransformation = (int) numberBeforeTransformation;

    // conditionals
    if (numberAfterTransformation >= 1 && numberAfterTransformation < 2){
        puts("\n- Very bad!");
    }
    else if(numberAfterTransformation >= 2 && numberAfterTransformation < 3){
        puts("\n- Bad!");
    }
    else if(numberAfterTransformation >= 3 && numberAfterTransformation < 4){
        puts("\n- Neutral!");
    }
    else{
        puts("\n- Very good!");
    }

	return 0;
}