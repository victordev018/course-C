// working with struct

#include <stdio.h>
#include <stdlib.h>

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

// function to read data of student
struct Student getStudent(){
    struct Student student;

    printf("\n> student name: ");
    scanf("%[^\n]",student.fullName);
    printf("\n> student age: ");
    scanf("%d",&student.age);
    printf("\n> student birthday (ex: 5 10 2005): ");
    scanf("%d%d%d", &student.birthday.day, &student.birthday.month, &student.birthday.year);

    return student;
}

// function to show data of the student
void showStudent(struct Student student){

    printf("\n-------------- data student --------------\n");
    printf("\n| -> name     : %s", student.fullName);
    printf("\n| -> age      : %d", student.age);
    printf("\n| -> birthday : %02d/%02d/%d\n", student.birthday.day, student.birthday.month, student.birthday.year);
}

int main()
{

    // read and create Student
    struct Student student = getStudent();

    // show data of student
    showStudent(student);

    return 0;
}