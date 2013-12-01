#include <stdio.h>

extern int delay;
extern char name[80];
getname()
{
    
    printf("Hi, what is your name?\n");
    sleep(delay);
    fgets(name,sizeof(name), stdin);
    
      
}

int getnumberAction()
{
    char actionString[80];

    fgets(actionString, sizeof(actionString),stdin);
    return atoi(actionString);;
}


