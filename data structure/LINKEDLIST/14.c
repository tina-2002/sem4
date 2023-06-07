// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnode(){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    printf("enter data \n");
    scanf("%d",&(temp->data));
    return temp;
}
struct node *createLL(int n){
    struct node *first, *last;
    if(n<=0){
        return NULL;
    }
    first=createnode();
    last=first;
    for(int i=1;i<n;i++){
        last->next=createnode();
        last=last->next;
    }
    return first;
}
void traverseLL(struct node *first){
    //struct node *temp;
    while(first){
        printf("%d \t",first->data);
        first=first->next;
    }
}
void delete_at_beg()
{
  node *temp;
  if(start == NULL)
  {
    printf("\n No nodes are exist..");
    return ;
  }
  else
  {
  temp = start;
  start = temp -> next;
  free(temp);
  printf("\n Node deleted ");
  }
}
void delete_at_last()
{
  node *temp, *prev;
  if(start == NULL)
  {
  printf("\n Empty List..");
  return ;
  }
  else
  {
  temp = start;
  prev = start;
  while(temp -> next != NULL)
  {
   prev = temp;
   temp = temp -> next;
  }
  prev -> next = NULL;
  free(temp);
  printf("\n Node deleted ");
 }
}
void delete_at_mid()
{
  int ctr = 1, pos, nodectr;
  node *temp, *prev;
  if(start == NULL)
  {
    printf("\n Empty List..");
    return ;
  }
  else
  {
  printf("\n Enter position of node to delete: ");
  scanf("%d", &pos);
  nodectr = countnode(start);
    if(pos > nodectr)
    {
    printf("\nThis node doesnot exist");
    }
 
    if(pos > 1 && pos < nodectr)
    {
    temp = prev = start;
     while(ctr < pos)
     {
      prev = temp;
      temp = temp -> next;
      ctr ++;
     }
    prev -> next = temp -> next;
    free(temp);
    printf("\n Node deleted..");
    }
    else
    {   
    printf("\n Invalid position..");
    getch();
    }
  }
}
void traverseLL(struct node *first){
    //struct node *temp;
    while(first){
        printf("%d \t",first->data);
        first=first->next;
    }
}
void getmiddle(struct node *head){
    struct node *f=head;
    struct node *s=head;
    while(f&&f->next){
        f=f->next->next;
        s=s->next;
    }
    printf("%d",s->data);
}
int main() {
    int n;
    struct node *head;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    head=createLL(n);
    traverseLL(head);
    return 0;
}