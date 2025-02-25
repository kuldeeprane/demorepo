#include<stdio.h>
#include <stdlib.h>


    int** inputMatrix(int rows, int cols) {
        int** matrix = (int**)malloc(rows * sizeof(int*));
        for(int i = 0; i < rows; i++) {
            matrix[i] = (int*)malloc(cols * sizeof(int));
        }
        printf("Enter elements of the matrix:\n");
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        return matrix;
    }


int main(){
    printf("Matrix Multiplication\n");
    printf("Enter order of 1st matrix\n");
    int m, n;
    scanf("%d %d", &m, &n);
    printf("Enter order of 2nd matrix\n");      
    int p, q;
    scanf("%d %d", &p, &q);
    if(n!=p){
        printf("Matrix multiplication not possible\n");
    }else{
        int** matrix1 = inputMatrix(m, n);
        int** matrix2 = inputMatrix(p, q);

       int** result = (int**) malloc(m * sizeof(int*)); /*Allocates memory for an array of rows pointers (int*).
                                                        Each pointer will eventually point to an array of integers (i.e., a row in the matrix).*/
       for(int i = 0; i<m; i++){
            result[i] = (int*) malloc(n * sizeof(int));
       }
       for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                result[i][j]=0;
                for(int k =0; k<n; k++){
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
       }
         printf("Resultant matrix is:\n");
         for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                printf("%d ", result[i][j]);
            }
            printf("\n");            
    }
}
}

