// TREE TRAVERSAL THROUGH RECURSION
#include <stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node *left;
      struct node *right;
};
struct node *createnode(){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("enter data \n");
    scanf("%d",&(temp->data));
    return temp;
}
void pre(struct node *root){
    if(root){
        printf("%d \t",root->data);
        pre(root->left);
        pre(root->right);
    }
}
void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%d \t",root->data);
        inorder(root->right);
    }
}
void post(struct node *root){
    if(root){
        post(root->left);
        post(root->right);
        printf("%d \t",root->data);
    }
}
int main(){
    struct node *root,*l,*r;
    root=createnode();
    root->left=createnode();
    root->right=createnode();
    root->left->left=createnode();
    root->left->right=createnode();
    root->left->right->left=createnode();
    root->left->right->right=createnode();
    root->right->right=createnode();
    // root->right->left->left=createnode();
    // root->right->left->right=createnode();
    printf("\npre prder representation \n");
    pre(root);
    printf("\nin prder representation \n");
    inorder(root);
    printf("\npost prder representation \n");
    post(root);
    return 0;
}