#include<stdio.h>
#include<stdlib.h>
int main(){
    int **mat;
    int rows,cols,row,col;
    printf("\n enter rows");
    scanf("%d",&rows);
    printf("\n enter cols");
    scanf("%d",&cols);
    // dynamic memory allocation code for matrix
    mat = (int**)malloc(rows*sizeof(int*));
    for(row=0;row<rows;row++){
        mat[row] = (int*)malloc(cols*sizeof(int));
    }
    // taking user input for the matrix
    for(row = 0; row < rows; row++) {
        for(col = 0; col< cols; col++) {
            printf("insert value for row %d column %d: ", row + 1, col + 1);
            scanf("%d", &mat[row][col]);
           
        }
    }
    for(row = 0; row < rows; row++) {
        for(col = 0; col< cols; col++) {
            printf("%d ", mat[row][col]);
        }
        printf("\n");
    }
}