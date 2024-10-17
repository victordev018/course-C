
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

// function to initialize Playlist
void initializePlaylist(Playlist *p){
    p->top = NULL;
    p->size = 0;
}

Music * getMusic();

// function to add new music in top of the Playlist
void push(Playlist *p){

    Music *newTop = (Music *) malloc(sizeof(Music));

    if (newTop){
        newTop = getMusic();
        newTop->next = p->top;
        p->top = newTop;
        p->size++;
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

        Music *remove = (Music *) malloc(sizeof(Music));

        if(remove){
            remove = p->top;
            p->top = remove->next;
            p->size--;
            free(remove);
        }
        else{
            printf("\nFailed to alloc memory\n");
        }

    }
    else{
        printf("\nFailed to remove, caused by: playlist is empty\n");
    }

}

// function to get the last Music in playlist
Music * peek(Playlist *p){

    if (!isEmpty(p)){

        return p->top;

    }
    else{
        printf("\nFailed to get last music, caused by: playlist is empty\n");
    }
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
    }
    else{
        printf("\nPLaylist is empty\n");
    }
}

// function to read and return a Music
Music * getMusic(){

    Music *music = (Music *) malloc(sizeof(Music));

    if(music){
        // read data
        printf("\n> music name: ");
        scanf("%[^\n]",music->name);
        getchar();
        printf("> music singer: ");
        scanf("%[^\n]",music->singer);
        getchar();
        printf("> music duration (ex 02:30): ");
        scanf("%[^\n]",music->duration);
        getchar();
    }
    
    return music;
    
}

int main()
{

    // Playlist *p = (Playlist *) malloc(sizeof(Playlist));
    // initializePlaylist(p);
    // push(p);
    // push(p);
    // showPLaylist(p);

    // printf("\nremoving last music of the playlist\n");

    // pop(p);
    
    // printf("\nGet the last music in playlist:\n");
    // showMusic(peek(p));

    char menu[500] = {"----------- menu ------------\n| 1 - add music\n| 2 - show playlist\n| 3 - get last music\n| 4 - remove last music\n|\n|-> option: "};

    printf("%s", menu);

    return 0;
}