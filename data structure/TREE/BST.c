#include <stdio.h>
#include<stdlib.h>
struct node{
      int data;
      struct node *left;
      struct node *right;
};
typedef struct node node;
node *createnode(int val){
    struct node *temp=NULL;
    temp =(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->data=val;
    return temp;
}
node *insertbst(node *root,int val){
    if(root){
        node *temp=root;
        node *prev;
        while(temp){
            if(val>temp->data){
                temp=temp->right;
            }
            else{
                temp=temp->left;
            }
        }
    if(val<prev->data){
        prev->left=createnode(val);
    }
    else{
        prev->right=createnode(val);
    }
    return root;
    }
  return createnode(val);
}
node *createbst(int num){
    node *root=NULL;
    int i,element;
    for(i=0;i<num;i++){
        printf("enter element: ");
        scanf("%d",&element);
        root=insertbst(root,element);
    }
    return root;
}
void inorder(struct node *root){
    if(root){
        inorder(root->left);
        printf("%d \t",root->data);
        inorder(root->right);
    }
}
int main(){
    int num;
    printf("enter the number of nodes: ");
    scanf("%d",&num);
    node *root=NULL;
    root=createbst(num);
    inorder(root);
}