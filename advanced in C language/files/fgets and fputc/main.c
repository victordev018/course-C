
// write and read file with fgets and fputc

#include <stdio.h>
#include <string.h>

// function to write in file
void write(char *pathFile){

    char phrase[500];
    FILE *file = fopen(pathFile, "w");

    if(file){

        printf("> type a phrase or 1 character to finish: ");
        scanf("%500[^\n]", phrase);
        scanf("%c");    // consumer '\n' of the buffer

        while(strlen(phrase) > 1){
            fputs(phrase, file);
            fputs("\n", file);
            printf("> type a phrase or 1 character to finish: ");
            scanf("%500[^\n]", phrase);
            scanf("%c");    // consumer '\n' of the buffer
        }

        fclose(file);
    }
    else
        printf("\nFailed to open file: %s", pathFile);
}

// function to read content of the file
void read(char *pathFile){

    char currentPhrase[500];
    FILE *file = fopen(pathFile, "r");

    if(file){

        fgets(currentPhrase, 500, file);

        while(!feof(file)){
            printf("%s", currentPhrase);
            fgets(currentPhrase, 500, file);
        }

        fclose(file);
    }
    else
        printf("\nFailed to open file: %s", pathFile);
}

int main()
{

    write(".\\teste.txt");
    printf("\ncontent of the file:\n");
    read(".\\teste.txt");

    return 0;
}