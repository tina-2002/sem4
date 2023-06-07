#include <stdio.h>
 
int main(){
    int n,i,c,b=0;
    printf("enter number of elements:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to be found:");
    scanf("%d",&c);
    for(i=0;i<n;i++){
        if(a[i]==c){
            b++;
          }
        }
    
    if(b==0){
        printf("element not found");
    }
    else{
        printf("element found");
    }


}