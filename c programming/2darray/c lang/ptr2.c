
// array is a pointer
#include<stdio.h>
int main(){
    int ar[5]={1,2,3,4,5};
    int *ptr;
    int i;
    printf("array elememts without pointer \n");
    for(i=0;i<5;i++){
        printf("%d \t",ar[i]);
    } 
    ptr=&ar; // indirection to ar[0]
    printf("\n array elememts with pointer ");
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d \t",*(ptr+i));
    } 

    return 0;
}