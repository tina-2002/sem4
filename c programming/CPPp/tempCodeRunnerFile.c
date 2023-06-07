#include<stdio.h>
int main()
{  
     int n,i,k,b,j;
     int a1[100];
     printf("emter the numver of elements \n");
     scanf("%d",&n);
     printf("\n enter the elements");
     for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
     }
     printf("enter the position of element to be deleted:");
     scanf("%d",&k);
   
     for (i=k-1;i<n-1;i++){
      a1[i]=a1[i+1];
     }
     printf("the updated array:");
     for(j=0;j<n-1;j++){
      printf("%d\t",a1[j]);
     }

 
    return 0;
}