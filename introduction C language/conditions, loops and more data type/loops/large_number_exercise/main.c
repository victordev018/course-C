/*
1. max = -999999999;
2. read number
3. if(number == -1) print max next stop;
4. if(number > max) max = number
5. go to 2
*/

#include <stdio.h>

int main(void){
    
    float current, max;
    
    while (current != -1){
        
        // enter with a number
        puts("\n|> enter a number: ");
        scanf("%f", &current);
        
        // check if current is the larger
        if (current > max){
            max = current;
        }
    }
    
    // show the large number
    printf("\n| the large number is: %.1f", max);
    
    return 0;
}