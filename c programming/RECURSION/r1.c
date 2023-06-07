#include<stdio.h>

int sum(int a){
    if(a>0){
        return a+sum(a-1);
    }
    else{
        return 0;
    }
}

int main(){
    int n,s;
    printf("enter the number of terms");
    scanf("%d",&n);
    s= sum(n);
    printf("sum of the numbers are %d",s);
}