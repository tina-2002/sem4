// Online C compiler to run C program online
#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

int main() {
    struct node a;
    struct node *p;
    p=&a;
    scanf("%d",&((*p).data));
    printf("data 1 %d",(*p).data);
    scanf("%d",&p->data);
    printf("data 2 %d",p->data);
   
}