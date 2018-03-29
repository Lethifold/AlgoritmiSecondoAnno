#include <stdio.h>
#include "lab0Functions.h"
#define N 10
#define M 10


int main(int argc, char **argv){
    
    int num1=1,num2=2;
    int matrix1[N][M];
    int matrix2[N][M];
    int row1, col1;
    int row2, col2;
    FILE *fp1, *fp2, *fp3;
    
    // controllo che da linea di comando vengano passati esattamente i nomi dei file
    if(argc!=4) return -2;
    
    fp1=fopen(argv[1], "r");
    if (fp1==NULL) return -1;
    fp2=fopen(argv[2], "r");
    if (fp2==NULL) return -1;
    fp3=fopen(argv[3], "w");
    if (fp3==NULL) return -1;
    
    
    GetInputMatrici(matrix1, num1, &row1, &col1, fp1);
    GetInputMatrici(matrix2, num2, &row2, &col2, fp2);
    
    fclose(fp1);
    fclose(fp2);
        
    if (col1!=row2){
        printf("Le matrici 1 e 2 non sono compatibili con la moltiplicazione matriciale\n");
        return 1;
    }
    
    CalcProdMatrici(matrix1, matrix2, col1,  row1,  col2,  row2, fp3);
    
    fclose(fp3);
    return 0;
}