#include<stdio.h>
int adj[8][8]={0,1,1,0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,1,1,1,0};
int visited[8]={0};
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}
int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
void push(struct Stack* stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
int pop(struct Stack* stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
struct Stack *st;
void dfstk(int s){
    st.push(s);
    while(!isEmpty(st)){
        int u=st.pop();
        if(visited[u]==0){
            visited[u]=1;
            printf("%d \t",u);
        }
        for(int d=0;d<8;d++){
            if(adj[u][d]==1 && visited[d]==0){
                st.push(d);
            }
        }
    }
}
int main()
{
    dfstk(0);
    return 0;
}
