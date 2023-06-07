#include<stdio.h>
int main(){
    int i=0,j=0;
    char str[20];
    printf("\n enter the string : ");
    gets(str); //gives a warning
    printf("\n %s is ur string",str);
    while(str[i]!=NULL){
        if(str[i]==' '){
            j++;
        }
      i++;
    }
    
     printf("\n length of string is %d", j+1);
}