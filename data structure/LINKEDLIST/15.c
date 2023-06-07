// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct dnode{
    int data;
    struct dnode *prev;
    struct dnode *next;
};
struct dnode *dcreatenode(){
    struct dnode *temp=NULL;
    temp =(struct dnode*)malloc(sizeof(struct dnode));
    temp->next=NULL;
    temp->prev=NULL;
    printf("enter data \n");
    scanf("%d",&(temp->data));
    return temp;
}
struct dnode *dcreateLL(int n){
    struct dnode *head;
    head=dcreatenode();
    struct dnode *tmp=head;
    if(n<=0){
        return NULL;
    }
    
    for(int i=1;i<n;i++){
        
        tmp->next=dcreatenode();
        tmp->next->prev=tmp;
        tmp=tmp->next;
    }
    return head;
}
void traverseLL(struct dnode *first){
    //struct node *temp;
    while(first){
        printf("%d \t",first->data);
        first=first->next;
    }
}
void traverseLL2(struct dnode *head){
    struct dnode *first=head;
    while(first->next){
        first=first->next;
    }
    while(first){
        printf("%d \t",first->data);
        first=first->prev;
    }
}
int main() {
    int n;
    struct dnode *head;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    head=dcreateLL(n);
    
    traverseLL2(head);
    return 0;
    
}