#include<stdio.h>

int main(){
    int a[10]={2,4,3,1,77,54,8,0,5,10};
    /*printf("enter elements");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("the array is : ");
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
        printf("\t");
    } */
     int b=0;
    for(int i=1;i<10;i++){
         if(a[b]<a[i]){
            b=i;
         }
    }
    printf("\n largest element is at %d th position",b+1);
    printf("\n the largest elemnt is %d",a[b]);
    /*for(int i=0;i<10;i++){
        if (a[i]>a[i+1]){
             a[i+1]=a[i];
        }   
    }
    printf("the largest elemnt is %d",a[9]);
*/
}