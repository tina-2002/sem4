#include <stdio.h>
int main()
{
    int a[10]={2,4,3,1,77,54,8,0,5,10};
    int i,j;
    for(i=0;i<10-1;i++){
        for(j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                int t;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\n after bubble sorting the array is : ");
    for(int i=0;i<10;i++){
        printf("\t %d",a[i]);
    } 
}