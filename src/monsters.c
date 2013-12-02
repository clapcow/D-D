#include <stdio.h>
#include <stdlib.h>
#include "entities.h"
struct monster *monsters[17];
extern int i;
void loadmonsters(){
    FILE *fp;
    fp = fopen("monsters", "rt");
    
    
    
    for(i = 0; i<=16;i++){
        monsters[i] = malloc(sizeof(struct monster));    
    }
    for(i = 0; i < 16; i++){
        monsters[i]->name = malloc(80);
        monsters[i]->attack1 = malloc(80);
        monsters[i]->attack2 = malloc(80);
        monsters[i]->phrase = malloc(80);
    } 
    for(i = 0; i < 16; i++){
        fscanf(fp,"%d\n",&(monsters[i]->number));
        fgets(monsters[i]->name,80,fp);
        fscanf(fp,"%d\n",&(monsters[i]->level));
        fscanf(fp,"%d\n",&(monsters[i]->health));
        fscanf(fp,"%d\n",&(monsters[i]->max_d));
        fscanf(fp,"%d\n",&(monsters[i]->min_d));
        fscanf(fp,"%g\n",&(monsters[i]->crit));
        fscanf(fp,"%s\n", monsters[i]->attack1);
        fscanf(fp,"%s\n", monsters[i]->attack2);
        fgets(monsters[i]->phrase,80, fp);
    }
    fclose(fp);
    
}
