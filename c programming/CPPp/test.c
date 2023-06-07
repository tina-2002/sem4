#include<stdio.h>
int main(){
    
    char s1[50],s2[50];
    int mat[50][50];
    printf("enter the first string containing 'S','T','I','N' : ");
    scanf("%s", &s1);
    printf("enter the second string containing 'S','T','I','N' : ");
    scanf(" %s", &s2);   
    int i,j,k;
    
    for(i = 0; i < 50; ++i)
        for(j = 0; j < 50; ++j)
        {
            mat[i][j]=0;
        }
    for(i = 0; i < 50; ++i){
        for(j = 0; j < 50; ++j){
           
                if(s1[j]==s2[j]){
                    mat[i][j]=255;
                }
                else{
                    mat[i][j]=999;
              
            }
         }
    }

    for(i = 0; i < 50; i++)
    {
        printf("\n");
        for(j = 0; j < 50; j++)
        {
            printf("%d", mat[i][j]);
            printf("\t");
        }
    }
 return 0;


}