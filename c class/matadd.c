#include <stdio.h>
 
int main()
{
   int  i,j,a[3][3]={1,2,3,4,5,6,7,8,9}, b[3][3]={2,4,6,16,20,36,49,64,81}, c[3][3];// step count=1
   for (i = 0; i < 3; i++) {
      for (j = 0 ; j < 3; j++) {
         c[i][j] = a[i][j] + b[i][j];
      }
   }
    for (i = 0; i < 3; i++) {
      for (j = 0 ; j < 3; j++) {
         printf("%d\t", c[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}