
#include <stdio.h>
#include<stdlib.h>
struct node{
      char data;
      struct node *left;
      struct node *right;
};
struct node *createnode(int val){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->data=val;
    return temp;
}
void doubleo(struct node *root){
    if(root){
        printf("%c \t",root->data);
        doubleo(root->left);
        doubleo(root->right);
        printf("%c \t",root->data);
    }
}
void tripleo(struct node *root){
    if(root){
        printf("%c \t",root->data);
        tripleo(root->left);
        printf("%c \t",root->data);
        tripleo(root->right);
        printf("%c \t",root->data);
    }
}
int main(){
    struct node *root,*l,*r;
    int x;
    root=createnode('a');
    root->left=createnode('b');
    root->right=createnode('c');
    root->left->left=createnode('f');
    root->right->left=createnode('d');
    root->right->right=createnode('e');
    doubleo(root);
    printf("\n ");
    tripleo(root);
}