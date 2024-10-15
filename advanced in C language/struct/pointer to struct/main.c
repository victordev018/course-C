// pointer to struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// creating Date structure
struct  Date
{
    int day;
    int month;
    int year;
};


// creating Student structure
struct Student{

    char fullName[50];
    int age;
    struct Date birthday;
};

int main(void){

    // creating pointer to Student struct and reserve memory to student
    struct Student *pointerStdt = (struct Student *) malloc(sizeof(struct Student));

    // checking if memory was not allocated successfully
    if (!pointerStdt){
        printf("\nFailed to allocate memory\n");
        return 1;
    }

    // setting values
    strcpy(pointerStdt->fullName, "Joao Victor");
    pointerStdt -> age = 19;
    pointerStdt -> birthday.day = 24;
    pointerStdt -> birthday.month = 6;
    pointerStdt -> birthday.year = 2006;


    // access only name from student
    printf("\n| -> name: %s", pointerStdt->fullName);   // pointerStdt->fullName === *(pointerStudent).fullName

    // freeing memory again
    free(pointerStdt);

    return 0;
}