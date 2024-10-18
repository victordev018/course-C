
#include <stdio.h>
#include <stdlib.h>

typedef struct music{

    char name[40];
    char singer[60];
    char duration[5];   // 02:30

    struct music *next;

}Music;

typedef struct playlist{

    Music *top;
    int size;

}Playlist;

void clearScreen(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// function to initialize Playlist
void initializePlaylist(Playlist *p){
    p->top = NULL;
    p->size = 0;
}

// function press enter to go back
void pressEnterToContinue(char *message){
    printf("%s\n", message);
    scanf("%[^\n]");
}

Music * getMusic();

// function to add new music in top of the Playlist
void push(Playlist *p){

    Music *newTop = getMusic();

    if (newTop){
        newTop->next = p->top;
        p->top = newTop;
        p->size++;
        printf("\nmusic added successfully");
        pressEnterToContinue("\npress enter to continue");
    }
    else{
        printf("\nFailed to alloc memory\n");
    }
}

// function to check if PLaylist is empty
int isEmpty(Playlist *p){
    return p->size?0:1;
}

// function to remove music in top of the PLaylist
void pop(Playlist *p){

    if(!isEmpty(p)){
        Music *remove = p->top;
        p->top = remove->next;
        p->size--;
        printf("\nmusic removed successfully");
        free(remove);
        getchar();
        pressEnterToContinue("\npress enter to continue");
    }
    else{
        printf("\nFailed to remove, caused by: playlist is empty\n");
        getchar();
        pressEnterToContinue("press enter to continue");
    }

}

// function to get the last Music in playlist
Music * peek(Playlist *p){

    if (!isEmpty(p)){

        return p->top;

    }
    
    printf("\nFailed to get last music, caused by: playlist is empty\n");
    getchar();
    pressEnterToContinue("\npress enter to continue");
    return NULL;
    
}

// function to show music
void showMusic(Music *m){
    printf("\n| name \t\t: %s\n| singer \t: %s\n| duration \t: %s\n", m->name, m->singer, m->duration);
}

// function to show Playlist
void showPLaylist(Playlist *p){

    if(!isEmpty(p)){
        Music *current = p->top;
        printf("\n------------------ PLaylist with %d musics ------------------\n",p->size);
        while(current){
            showMusic(current);
            current = current->next;
        }
        printf("\n------------------------------------------------------------\n",p->size);
        getchar();
        pressEnterToContinue("press enter to continue");
    }
    else{
        printf("\nPLaylist is empty\n");
        getchar();
        pressEnterToContinue("press enter to continue");
    }
}

// function to show the last music
void showLastMusic(Playlist *p){

    if(!isEmpty(p)){
        Music *m = peek(p);
        if(m){
            showMusic(m);
            getchar();
            pressEnterToContinue("\npress enter to continue");
        }
        else{
            printf("\nFailed to get last music, caused by: playlist is empty");
            getchar();
            pressEnterToContinue("\npress enter to continue");
        }
        
    }
    else{
        printf("\nFailed to show last music, caused by: playlist is empty\n");
        getchar();
        pressEnterToContinue("\npress enter to continue");
    }
}

// function to read and return a Music
Music * getMusic(){

    Music *music = (Music *) malloc(sizeof(Music));

    if(music){
        // read data
        printf("\n> music name: ");
        getchar();
        scanf("%[^\n]",music->name);
        getchar();
        printf("> music singer: ");
        scanf("%[^\n]",music->singer);
        getchar();
        printf("> music duration (ex 02:30): ");
        scanf("%[^\n]",music->duration);
        getchar();
        return music;
    }
    return NULL;
    
}

// function to show main menu
void showMainMenu(){
    char menu[500] = {"----------- menu ------------\n| 1 - add music\n| 2 - show playlist\n| 3 - get last music\n| 4 - remove last music\n| 5 - quit\n|-> option: "};
    printf("%s", menu);
}

int main()
{

    // initialize Playlist
    Playlist *p = (Playlist *) malloc(sizeof(Playlist));
    initializePlaylist(p);

    if (p){
        int option;
        
        do{

            clearScreen();
            // read option
            showMainMenu();
            scanf("%d", &option);

            switch (option){
                case 1:
                    // add music
                    clearScreen();
                    push(p);
                    break;
                case 2:
                    // show playlist
                    clearScreen();
                    showPLaylist(p);
                    break;
                case 3:
                    // get last music in playlist
                    clearScreen();
                    showLastMusic(p);
                    break;
                case 4:
                    // remove the last music in playlist
                    clearScreen();
                    pop(p);
                    break;
                case 5:
                    // close system
                    clearScreen();
                    free(p);
                    return 0;
                default:
                    clearScreen();
                    printf("\ninvalid option!\n");
                    getchar();
                    pressEnterToContinue("\npress enter to continue");
            }
        }while(option != 5);
    }
    else{
        printf("\nFailed to initialize PLaylist\n");
    }

    return 0;
}