#include<stdio.h>
int main(){
    char str[20];
    printf("\n enter the string : ");
    gets(str); //gives a warning
    //printf("\n %s is ur string",str);
    puts(str);
    int i=0,j;
    char a;
    while(str[i]!=NULL){

        i++;

    }
    printf("\n length of string is %d", i);
    for (j=0;j<=i;j++){
        if(str[j]<123 && str[j]>96){
            str[j]=str[j]-32;
        }
    }
    printf("\n %s is ur string",str);
}