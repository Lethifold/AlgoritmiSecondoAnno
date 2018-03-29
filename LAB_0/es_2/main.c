#include <stdio.h>
#include <ctype.h>
//Proto



    typedef struct Input{
        char w[64];
        char str[2048];
    }input;
    
//void GetInput(Input *p);
//Main
int main(int argc, char **argv)
{
    struct input{
    char w[64];
    char str[2048];
    }Input;
    
    int i,lenghtW=0,h=0,wrapped=0,notwrapped=0;
    
    
    
    //Inizializzo la struttura
    for (i=0;i<64;i++){
        input.w[i]='\0';
    }
        for (i=0;i<2048;i++){
        input.str[i]='\0';
    }
    
    //GetInput( &in );
    printf("Inserisci una parola: ");
    scanf("%s",input.w);
    printf("Inserisci una frase: ");
    scanf("%s",input.str);
    
    
    //Find how long the word is
    i=0;
    while(input.w[i]!='\0'){
        i++;
    }
    
    lenghtW=i;
    
    //Cerco la parola
    for(h=0;h<2048;h++){
        
        i=0;
        
        while(input.w[i]==input.str[h]){
            if(i==lenghtW && (!isalpha(input.str[h+1]) || input.str[h+1]=='\0')) notwrapped++;
            else if (i==lenghtW) wrapped++;
            i++;
            h++;
        }
    }   
    
    printf("wrapped: %d \n not wrapped: %d \n",wrapped, notwrapped);
    
    
	return 0;
}

//Functions
/*void GetInput(Input *p){
    
    printf("Inserisci una parola: ");
    scanf("%s",p->w);
    printf("Inserisci una frase: ");
    scanf("%s",p->str);
    
    }*/