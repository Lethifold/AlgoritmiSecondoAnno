#include <stdio.h>
#include "es6Funzioni.h"

#define P 25
#define Q 100

int main(int argc, char **argv) {        
    list gList[Q];
    couple cpl[(Q/2)];
    FILE *fp;
    char names[Q][P];
    int row=0;
    int nomi_eff=0;
    int i;
    int n_products[Q];
    float expectied_price[Q];
    
    fp = fopen("glist.txt","r");
    if (fp==NULL) return 1;
    row=get_input(fp, gList);
    fclose(fp);
    
    nomi_eff=get_name(row, names, gList);
    
    for(i=0; i<nomi_eff; i++) {
        n_products[i] =diff_products(names[i], gList);    
    }
    
    for(i=0; i<nomi_eff; i++) {
        expectied_price[i] = costo(names[i], gList);    
    }
    
    //Stampo i risultati ottenuti fino a questo momento
    for(i=0;i<nomi_eff;i++) fprintf(stdout,"%7s -> %2d  ->  %4.2f \n", names[i], n_products[i], expectied_price[i]);
    
    //couple_finder(names, nomi_eff, gList, cpl);
    
	return 0;
}
