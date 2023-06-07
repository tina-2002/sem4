// array is a pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr=(int*)malloc(32*sizeof(int));
    printf("enter values of array: ");
    for(i=0;i<5;i++){
        scanf("%d ",(ptr+i));
    }
    printf("\n array elememts with pointer ");
     for(i=0;i<5;i++){
        printf("%d \t",*(ptr+i));
    } 

}