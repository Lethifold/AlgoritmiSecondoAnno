#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
    int i,h=0,k=0;
    //Cercare la funzione che trasforma un carattere char in int
        k=atoi(*argv);
        for(i=0;i<k;i++){
            h=0;
            while(h<=i){
                printf("*");
                h++;
            }
            
            printf("\n");
        }
	return 0;
}
