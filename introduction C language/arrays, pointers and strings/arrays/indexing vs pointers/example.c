#include <stdio.h>
 
int main(void)
{
   

    int i,  numbers[] = {1, 3, 5, 6, 10}, size;
    size = sizeof(numbers) / sizeof(numbers[0]);
    
    // show all numbers
    printf("{ ");
    for (i = 0; i < size; i++){
        printf("%d ", i[numbers]);
    }
    printf("}");
    
    // show first number
    printf("\n%d", 0[numbers]);
    
    // equivalence
    // numbers[0] === numbers   -> numbers is a pointer to first element
    // numbers[i] === *(numbers + i)    -> both forms access the value
    // *(i + numbers) === i[numbers]    -- both forms access the value 

    return 0;
}