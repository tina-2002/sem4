#include <stdio.h>
#define size 5 
int stack[size]; 
int top = -1; 

void push(int x)
{
    if(top == size-1) 
    {
        printf("Stack is full");
    }
    stack[++top] = x;
}

int pop()
{
    if(top == -1) 
    {
        printf("Stack is empty");
        return -1; 
    }
    return (stack[top--]);
}

void traverse()
{
    int i;
    for(i = top; i >= 0; i--)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}

int main()
{
    push(3);
    push(5);
    push(9);
    traverse(); 
    pop();
    traverse();
    push(10);
    push(11);
    pop();
    traverse();

    return 0;
}