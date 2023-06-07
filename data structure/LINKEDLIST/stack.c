#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top=NULL;
struct node *createnodewithvalue(int val){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=val;
    return temp;
}
void push(int x){
    struct node *temp;
    temp=createnodewithvalue(x);
    if(temp==NULL){
        printf("memory full");
        return;
    }
    temp->next=top;
    top=temp;
}
void traverseLL(struct node *first){
    if(top==NULL){
        printf("empty stack");
        return;
    }
    while(first){
        printf("%d \t",first->data);
        first=first->next;
    }
}
int pop()
{
  struct node *temp;
  if(top == NULL)
  {
    printf("\n empty stack");
    return 0;
  }
  int y=top->data;
  temp = top;
  top = temp -> next;
  free(temp);
  return y;
}
int isEmpty(){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    if(top==NULL){
        return 1;
    }
    else{
        free(temp);
        return 0;
    }
}
int peak(){
    struct node *temp;
    temp=top;
    if(temp == NULL)
    {
    printf("\n empty stack");
    return 0;
    }
    int y=temp->data;
    return y;
}
int main() {
    push(91);
    push(33);
    push(24);
    push(77);
    traverseLL(top);
    int x=pop();
    printf("\nvalue popped is %d",x);
    printf("\n");
    traverseLL(top);
    int i=peak();
    printf("\n current top element is %d",i);
    return 0;
}