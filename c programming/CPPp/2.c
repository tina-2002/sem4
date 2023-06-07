#include<stdio.h>
int main()
{  
     int n,i,k,b,j;
     int sum=0;
     int a1[100];
     float mean;
     printf("emter the numver of elements \n");
     scanf("%d",&n);
     printf("\n enter the elements");
     for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
     }
     for(j=0;j<n;j++){
      printf("%d\t",a1[j]);
     }

   
     for (i=0;i<n;i++){
      sum=sum+a1[i];
     }
     mean=sum/n;
     printf("\nmean of this array: %f", mean);

    //to find mode
     int Val=0, count=0, max=0;

    for(i=0;i<n;i++) {
        count = 0;
        for(j=0;j<n;j++) {
            if(a1[i] == a1[j]) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            Val = a1[i];
         }
    }

    printf("\nThe mode is : %d as count is : %d",Val,max);
    //to find median
    int median;
    if(n%2==0){
        median=(a1[n/2]+a1[n/2-1])/2;
    }
    else{
        median=a1[(n-1)/2];
    }
    printf("\nThe median is : %d",median);
    return 0;
}