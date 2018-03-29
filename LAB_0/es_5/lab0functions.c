#include <stdio.h>
#include "lab0Functions.h"

void CalcProdMatrici(int matrixa[N][M],int matrixb[N][M],int col1, int row1, int col2, int row2, FILE *fp){
    int i,j;
    int w=0,k;
    
    for(i=0; i<row1; i++){
        for(j=0; j<col2; j++){
            for(k=0; k<col1; k++){
                w+=(matrixa[i][k]*matrixb[k][j]);
            }
        fprintf(fp,"%d ", w);
        w=0;
        }
        fprintf(fp, "\n");
    }
}
void GetInputMatrici(int matrix[N][M], int a, int *row, int *col, FILE *fp ){
    //This function gives you the possibility to inport from keyboard a matrix of maximun dimension of [N][M].
    // Before using it you must create a matrix and two int for effectve dimentions of the matrix
    int i,j;
    int x=0, y=0;
    
    //printf("Matrice %d \ninserire le dimensioni della matrice (dimensioni massime %d x %d): ", a, N, M);
    fscanf(fp,"%dx%d", &x, &y);
    
    
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            fscanf(fp,"%d ", &matrix[i][j]);
        }
    }
    *row=x;    
    *col=y;

}