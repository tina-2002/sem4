#include<stdio.h>
int main(){
    char str[20];
    printf("\n enter the string : ");
    gets(str); //gives a warning
    printf("\n %s is ur string",str);

    int i=0,j;
    char a,b;
    while(str[i]!='\0'){
        i++;
    }
    printf("\n length of string is %d", i);
    /*for(j=0;j<i/2;j++){
        a=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=a;
    }
    printf("\n %s is reveredd",str); */
    for(j=0;j<i/2;j++){
       
        if(str[j]==str[i-j-1]){
            printf("\n palindrome");
        }
        
    }
    
}
