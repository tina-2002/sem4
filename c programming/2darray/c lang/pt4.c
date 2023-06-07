#include<stdlib.h>

#include<stdio.h>

int main(){

    int rows=5,i,r,c;

    int *ptr[rows];

    int cols=4;

    for(i=0;i<rows;i++){

        ptr[i]=(int*)malloc(cols*sizeof(int));

    }
    printf("enter values");
    for(r=0;r<rows;r++){

        for(c=0;c<cols;c++){

            scanf("%d", &ptr[r][c]);

        }

    }

    for(r=0;r<rows;r++){

        for(c=0;c<cols;c++){

            printf("%d\t", ptr[r][c]);

        }

        printf("\n");

    }

}