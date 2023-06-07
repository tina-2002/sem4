// Online C compiler to run C program online
#include <stdio.h>

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
int main() {
    int n;
    struct node *head;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    head=createLL(n);
    struct node *temp=head;
    while(temp){
        printf("%d \t",temp->data);
        temp=temp->next;
    }
    return 0;
}