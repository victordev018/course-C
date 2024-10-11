
// implementing bubble sort algorithm for sorting

#include <stdio.h>

// bubble sort
void bubbleSort(int list[], int descending, int size){

    for (int i = 0 ; i < size - 1; i++){

        for (int j = 0; j < size - 1 - i; j++){

            int first = list[j];
            int second = list[j+1];

            if(!descending){

                if (first > second){
                    list[j] = second;
                    list[j+1] = first;
                }
            }
            else{

                if (second > first){
                    list[j] = second;
                    list[j+1] = first;
                }
            }

        }

    }
}

// show vector
void showVector(int vector[], char message[], int size){
    printf("\n| %s\n", message);
    
    for (int i = 0; i < size; i++){
        printf("| -> %d\n", vector[i]);
    }
}

int main(void)
{

    // creating vector of numbers
    int numbers[5] = {4, 10, 8, 2, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // ascending order
    bubbleSort(numbers, 0, size);
    showVector(numbers, "ascending order", size);


    // descending order
    bubbleSort(numbers, 1, size);
    showVector(numbers, "descending order",  size);

    return 0;
}