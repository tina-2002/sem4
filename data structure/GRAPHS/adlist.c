#include<stdio.h>
#include<stdlib.h>
struct node 
{   int vert;
    struct  node *next;
};
struct node *adjlist[50]={NULL};
struct node *createnode(int ver){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
    temp->vert=ver;
    return temp;
}
int main(){
    int v,e,s,d;
    printf("\nEnter the Number of Vertices: ");
    scanf("%d",&v);
    printf("\n enter no of edges:");
    scanf("%d",&e);
    for(int i=0;i<e;i++){
        printf("\n enter %dth edge's source and destination :",i+1);
        scanf("%d %d",&s,&d);
        /* using if else
        if(adjlist[s]==NULL){
            adjlist[s]=createnode(d);
        }
        else{
            struct node *temp=createnode(d);
            temp->next=adjlist[s];
            adjlist[s]=temp;
        } */
        //without if else
        struct node *temp=createnode(d);
        temp->next=adjlist[s];
        adjlist[s]=temp;
        
        temp=createnode(s);
        temp->next=adjlist[d];
        adjlist[d]=temp;
    }

}
