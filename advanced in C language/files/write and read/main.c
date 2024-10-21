
// working with write and read in files

#include <stdio.h>

// function to write in file
void write(char *pathFile){

    char currentChar;
    FILE *file = fopen(pathFile, "w");

    if(file){

        printf("\n> enter a text to be stored: ");
        scanf("%c", &currentChar);
        while(currentChar != '\n'){
            fputc(currentChar, file);
            scanf("%c", &currentChar);
        }

        fclose(file);

    }
    else 
        printf("\nFailed to open file");
}

// function to read file content
void read(char *pathFile){
    char currentChar;
    FILE *file = fopen(pathFile, "r");

    if (file){
        currentChar = fgetc(file);
        while(!feof(file)){
            printf("%c", currentChar);
            currentChar = fgetc(file);
        }

    }
    else
        printf("\nFailed to open file");
}

int main()
{

    write(".\\teste.txt");
    printf("\ncontent of the file:\n");
    read(".\\teste.txt");

    return 0;
}