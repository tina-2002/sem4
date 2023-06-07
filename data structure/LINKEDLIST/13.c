#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnodewithvalue(int val){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->data=val;
    return temp;
}
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
struct node *insertAtFirst(struct node *head,int val){
    struct node *temp =NULL;
    temp=createnodewithvalue(val);
    temp->next=head;
    head=temp;
    return head;
}
struct node *insertAtLast(struct node *head,int val){
    struct node *temp=NULL;
    struct node *temp1=head;
    temp=createnodewithvalue(val);
    while(temp->next!=NULL){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->next=NULL;
    return head;
}
int count(struct node *head){
    int count=0;
    struct node *temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
struct node *insertatGIVENPOSITION(struct node *head,int n,int val){
    if (head==NULL){
        return(createnodewithvalue(val));
    }
    if(n<=0){
       printf("\n invaLID N");
       return;
    }
    if(n==1){
        return(insertAtFirst(head,val));
    }
    if(n>count(head)){
        return(insertAtLast(head,val));
    }
    struct node *temp=head;
    struct node *newnode=createnodewithvalue(val);
    for(int i=1;i<n-1;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
int main() {
    int n,m;
    struct node *head;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    head=createLL(n);
    struct node *temp=head;
    printf("\n the linked list is as follows:\n ");
    while(temp){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    int p,r;
    printf("\n enter value to be insertedn and its pos : \n");
    scanf("%d %d",&p,&r);
    insertatGIVENPOSITION(head,p,r);
    struct node *temp2=head;
    printf("\n the linked list is as follows:\n ");
    while(temp2){
        printf("%d \t",temp2->data);
        temp2=temp2->next;
    }
    return 0;
}