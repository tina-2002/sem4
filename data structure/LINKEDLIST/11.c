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
void printfirstNnodes(struct node *head,int n){
    if (head==NULL){
        printf("\n empty LL");
        return;
    }
    if(n<=0){
       printf("\n invaLID N");
       return;
    }
    int count;
    for(count=1;count<=n&&head!=NULL;count++){
        printf("%d \t ",head->data);
        head=head->next;
    }
    if(n>=count && head==NULL){
        printf("\n not enough data");
    }
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
    printf("\n enter no of nodes to be printed\n");
    scanf("%d",&m);
    printf("\n");
    struct node *temp2=head;
    printfirstNnodes(temp2,m);
    return 0;
}