#include <stdio.h>

int main(){
    int a[10]={2,4,3,1,77,54,8,0,5,10};
  
     int b=0;
    for(int i=1;i<10;i++){
         if(a[b]<a[i]){
            b=i;
         }
    }
    printf("\n largest element is at %d th position",b+1);
    printf("\n the largest elemnt is %d",a[b]);
    int temp;
    
    //SELECTION SORT is a position based sorting algo. time and space complexity,number of comparisons and swaps.
    int i,j,pos;
    for(i=0;i<10;i++){
        pos=i;
        for(j=i+1;j<10;j++){
            if(a[pos]<a[j]){
                pos=j;
            }

        }
        if(pos!=i){
            temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
        }
    }
    printf("\n after sorting the array is : ");
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
        printf("\t");
    } 
}