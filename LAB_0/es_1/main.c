#include <stdio.h>
#include <math.h>


float pow_me(float, int);


int main(){

float x,r;
int y;

    printf("inserisci la base: ");
    scanf("%f", &x );
    printf("inserisci l'apice: ");
    scanf("%d", &y );


    r=pow_me(x,y);
    printf("Questo e' il tuo risultato %.2f\n\n", r);

  return 0;
}

float pow_me(float a, int b){

  float r=1;
  int i;
  
  for(i=0;i<b;i++){
    r=r*a;
  }

  return r;
}
