#include<stdio.h>
#define size 5
int top=-1,stack[size];
void push(int x){
    if(top==size-1){
        printf("stack is full");
    }
    stack[++top]=x;
   
}
int pop(){
    if(top==-1){
        printf("stack is empty");
    }
    return(stack[top--]);
}
void traverse(){
    int i;
    printf("\n");
    for(i=top;i>=0;i--){
        printf("%d \t ",stack[i]);
    }
    
} 
int main(){
    push(3);push(2);push(8);
    traverse();
    pop();traverse();
    push(33);push(1);pop();traverse();
}