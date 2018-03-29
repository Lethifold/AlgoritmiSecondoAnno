#include <stdio.h>
#include "es6Funzioni.h"
#include <string.h>


int get_input(FILE *fp, list *lis){
    
    int i=0;
    
    while(fscanf(fp, "%s %d %f %s", lis[i].product, &lis[i].quantity, &lis[i].price, lis[i].name)!=EOF){
        i++;
    }
    return i;
}

int get_name(int righe, char name[Q][P], list *lis){
    int i, j,found=0,c=0;
    
    for(i=0;i<righe;i++) {
        for(j=0;j<righe;j++) {
        if(!strcmp(lis[i].name, name[c])) found=0; 
        else found=0;
        }
        if (found==0) {
            strcpy(name[c], lis[i].name);
            c++;
        }
    }
    return c;
}

int diff_products(char *name, list *lis) {
    int i, k=0;
    
    for (i=0; i<Q; i++) {
        if (strcmp(name, lis[i].name)==0) {
            k+=lis[i].quantity;
        }
    }
    
    return k;
}

float costo(char *name, list *lis) {
    int i, k=0;
    
    for (i=0; i<Q; i++) {
        if (strcmp(name, lis[i].name)==0) {
            k+=lis[i].price;
        }
    }
    
    return k; 
}

void couple_finder(char name[Q][P], int righe, list *lis, couple *coppia) {
    int i,j;
    int top[righe][righe];
    
    for (i=0; i<righe; i++) {
        for(j=0; j<righe; ){}
    }
    
}