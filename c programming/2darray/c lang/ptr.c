#include<stdio.h>
#include<string.h>
int main(){
    float var=12.43;
    float *ptr;
    ptr=&var;
    char arr[20]='tina';
    char *ptr1;
    ptr1=&arr;
    printf("\n value is %f",*(ptr));
    printf("\n address is %u",ptr);
    printf("\n address is %u",ptr1);
    printf("\n value is %c",*(ptr1));
    return 0;
}