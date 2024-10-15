
// working with struct as a dynamic list

#include <stdio.h>
#include <stdlib.h>


// creating structure with an int value and a reference pointer to 
// a next one of the same type as the structure
struct no {
    int value;
    struct no *next;
};

int main(void){

    struct no *ptr1 = (struct no *) malloc(sizeof(struct no));
    struct no *ptr2 = (struct no *) malloc(sizeof(struct no));
    struct no *current = (struct no *) malloc(sizeof(struct no));;
    
    
    if(ptr1 && ptr2 && current){
        ptr1 -> value = 1;
        ptr1 -> next = NULL;
        ptr2 -> value = 2;
        ptr2 -> next = ptr1;
        current = ptr2;
    }

    // scrolling list
    while (current)
    {
        printf("| -> value %d\n", current->value);
        current = current -> next;
    }
    

    // freeing memory again
    free(ptr1);
    free(ptr2);
    free(current);

    return 0;
}