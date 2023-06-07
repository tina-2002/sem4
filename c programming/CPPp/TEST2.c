#include<stdio.h>
int main(){
    int a[3],b[3],c[6],i,j,k;
    printf("\n ENTER THE FIRST SORTED ARRAY: ");
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
     }
    for(j=0;j<3;j++){
      printf("%d\t",a[j]);
     }
    printf("\n ENTER THE SECOND SORTED ARRAY: ");
    for(i=0;i<3;i++){
        scanf("%d",&b[i]);
     }
    for(j=0;j<3;j++){
      printf("%d\t",b[j]);
     }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           for(k=0;k<6;k++){
            
                if(a[i]>b[j]){
                    c[k]=b[j];
                }
                else{
                    c[k]=a[i];
                }
            
        }
      }

    }
    
    for(k=0;k<6;k++){
        printf("%d\t",c[k]);
    }

}