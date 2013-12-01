#include <stdio.h>
extern int delay;
extern int options;
loadGame(){

}

newGame()
{

}

howTo(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

}

optionMenu(){

}

void startMenu()
{
    printf("1) Load Game\n2) Start New Game\n3) How to play\n4) Options\n\n");
    sleep(delay*2);
    while (options != 1 && options !=2 && options != 3 && options != 4){   
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
            default:
                doError();
                break;
        }
    }
}
