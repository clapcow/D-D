#include <stdio.h>
#include "stats.h"

int start = 1;
int i;
//Creating structure for your player stats

struct stats *pstats;
FILE *fp;
char name[80];
char charactername[80];
int delay = 1;
int options;
extern char *filename;
void loadFile(void);
void createFile(void);

//Main Function
int main(){
    //Give life to your player stats
    pstats = malloc(100);;
    loadmonsters(); 
    startMenu();
    
    
    return 0;
}
//Loads in variables from save file
void loadFile(void){
    fp = fopen(("%s",filename), "r");
    fscanf(fp,"%d", &pstats->totaldamagedealt);
    fscanf(fp,"%d", &pstats->health);
    fscanf(fp,"%d", &pstats->classtype);
    fscanf(fp,"%d", &pstats->xp);
    fscanf(fp,"%d", &pstats->level);
    fscanf(fp,"%d", &pstats->multiplyer);
    
}
