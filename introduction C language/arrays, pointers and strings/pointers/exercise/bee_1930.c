// beecrowd question 1930

#include <stdio.h>

void decrease(int *pointer, int amount);

int main()
{
    // variables
    int num1, num2, num3, num4, sum, *result;
    
    // read values
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    
    sum = num1 + num2 + num3 + num4;
    result = &sum; 
    
    decrease(result, 3);
    
    printf("%d\n", *result);
    
}

void decrease(int *pointer, int amount)
{
    
    *pointer -= amount;
    
}
