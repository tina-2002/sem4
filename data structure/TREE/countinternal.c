#include <stdio.h>
#include<stdlib.h>
struct node{
      int data;
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
int count(struct node *root){
    if(root==0){
        return 0;
    }
    else{
        return(1+count(root->left)+count(root->right));
    }
}
int countleafnodes(struct node *root){
    if(root)
    {
        if((root->left==NULL) && (root->right==NULL)){
             return(1);
        }
        else{
            return(countleafnodes(root->left)+countleafnodes(root->right));
        }
    }
    return 0;
}
int internal(struct node *root){
    if(root==NULL){
        return 0;
    }
    if(root->left!=NULL || root->right!=NULL || (root->left!=NULL && root->right!=NULL)){
        return(1+ internal(root->left)+internal(root->right));
    }
    else{
        return 0;
    }
}

int main(){
    struct node *root,*l,*r;
    int x,z,sum=0;
    root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    root->left->right->left=createnode(6);
    root->left->right->right=createnode(7);
    root->right->right=createnode(8);
    printf("\n internal nodes %d",internal(root));
}