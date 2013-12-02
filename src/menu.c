#include <stdio.h>
extern int delay;
extern int options;
char *filename;
extern FILE *fp;
void startMenu(void);
extern int start;
void loading(void){
printf(".");
sleep(1);
fflush(stdout);
printf(".");
sleep(1);
fflush(stdout);
printf(".");
sleep(1);
fflush(stdout);
printf(".\n\n");
sleep(1);

}
startGame()
{


}


loadGame(){
    
    printf("\nEnter File Name: ");
    fgets(filename, 80, stdin);
    
    fp = fopen(("%s", filename), "r+");
    if((fopen(("%s", filename), "r+")) == NULL){
        sleep(delay);
        
        printf("That Save doesn't exist\n\n");
        sleep(delay);
    }
    else{
        loadFile();
        printf("Please Wait\n");
        loading();
        printf("File Loaded\n");
        sleep(1);
    }
    startMenu();
}

newGame()
{

}

howTo(){
    printf("\n");
    sleep(delay);
    printf("Enter one of the options givin to you and press return/Enter\n");
    sleep(delay * 2);
    printf("Press enter to continue\n");
    getchar();
    startMenu();
}

optionMenu(){

}

void startMenu()
{
    filename = malloc(80);    
    printf("1) Load Game\n2) Start New Game\n3) How to play\n4) Options\n5) Start\n6) Quit\n\n");
    sleep(delay*2);
    while ( options != 5 && options != 6){   
        options = getnumberAction();
        switch(options){
            case 1:
                loadGame();
                break;
            case 2:
                newGame();
                break;
            case 3:
                howTo();
                break;
            case 4:
                optionMenu();
                break;
            case 5:
                startGame();
                start = 0;
                break;
            case 6:
            break;
            default:
                doError();
                break;
        }
    }
}
