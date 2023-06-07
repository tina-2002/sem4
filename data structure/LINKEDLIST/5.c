// merge of 2 nodes
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

int main() {
    struct node *p=NULL;
    struct node *q=NULL;
    p=(struct node *)malloc(sizeof(struct node));
    q=(struct node *)malloc(sizeof(struct node));
    p->data =10;
    p->next=NULL;
    q->data =101;
    q->next=NULL;
    p->next=q;
    printf("data = %d \n",p->data);
    printf("data = %d \n",p->next->data);
    free(p);
    printf("data = %d \n",p->data);
    printf("data = %d \n",p->next->data);
    return 0;
}