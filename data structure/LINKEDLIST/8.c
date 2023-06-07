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
int searchLL(int x,struct node *first){
    //struct node *temp;
    int count=0;
    while(first){
        if(x==first->data){
            printf("\n element found at %d node!",count+1);
            return 1;
        }
        first=first->next;
        count++;
    }
    printf("\n element not found!");
    return 0;
}
int sumLL(struct node *first){
    int sum=0;
    while(first){
        sum=sum+(first->data);
        first=first->next;
    }
    return sum;
}
int main() {
    int n;
    struct node *head;
    printf("enter no of nodes\n");
    scanf("%d",&n);
    head=createLL(n);
    traverseLL(head);
    int s;
    printf("\n enter the data to be searched:\n");
    scanf("%d",&s);
    searchLL(s,head);
    int c=sumLL(head);
    printf("\n sum of data in LL : %d",c);
    return 0;
}