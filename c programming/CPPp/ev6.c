#include <stdio.h>
#define size 5 // define the size variable with 5 to make it as a constant value
int stack[size]; // declare an array named stack with 'size' as the designated size of array.
int top = -1; // initialize top with -1 to make sure there are no elements in the stack

// define push function, it's a void since there is no return value expected in it. Push function just adds the the element to the stack
void push(int x)
{
    if(top == size-1) // it means that the element is present at the topmost index/position
    {
        printf("Stack is full");
    }
    stack[++top] = x; // if the stack is empty, the element at the top(a variable/index basically a position) will become 'x'. Using ++top, as we have to first increase the index and then place the object at that position.
}

int pop()
{
    if(top == -1) // top == -1 means stack is empty
    {
        printf("Stack is empty");
        return -1; // return -1; signifies error;
    }
    return (stack[top--]); // returns the element first and then reduces the value of top, hence top--
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