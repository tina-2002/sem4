#include<stdio.h>
int main(){
    char str[20];
    printf("\n enter the string : ");
    // scanf("%s",str);
    gets(str); //gives a warning
    printf("\n %s is ur name",str);
}