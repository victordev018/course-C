
// calculating student grade

#include <stdio.h>

int main(void) {

    // variables
    float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;

    // average
    float avgStudentOne = (studentAYear1 + studentAYear2 + studentAYear3) / 3;
    float avgStudentTwo = (studentBYear1 + studentBYear2 + studentBYear3) / 3;
    float avgStudentThree = (studentCYear1 + studentCYear2 + studentCYear3) / 3;

    // output
    printf("\n| Student name:  Joao     Kaio     Marcos   avg\n");
    printf("| Student A %9.2f %9.2f %9.2f %5.2f\n", studentAYear1, studentAYear2, studentAYear3, avgStudentOne);
    printf("| Student B %9.2f %9.2f %9.2f %5.2f\n", studentBYear1, studentBYear2, studentBYear3, avgStudentTwo);
    printf("| Student C %9.2f %9.2f %9.2f %5.2f\n\n", studentCYear1, studentCYear2, studentCYear3, avgStudentThree);

    return 0;
}