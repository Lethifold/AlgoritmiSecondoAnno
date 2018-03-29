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
    
    GetInputMatrici(matrix1, num1, &row1, &col1, stdin);
    GetInputMatrici(matrix2, num2, &row2, &col2, stdin);
    
    if (col1!=row2){
        printf("Le matrici 1 e 2 non sono compatibili con la moltiplicazione matriciale\n");
        return 1;
    }
    
    CalcProdMatrici(matrix1, matrix2, col1,  row1,  col2,  row2, stdin);
    return 0;
}