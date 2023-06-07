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
int Sum(struct node *root,int *sum){
    if(root==0){
        return 0;
    }
    else{
        sum=((root->data)+Sum(root->left,sum)+Sum(root->right,sum));
    }
    return sum;
}
int main(){
    struct node *root,*l,*r;
    int x,z,sum=0;
    root=createnode();
    root->left=createnode();
    root->right=createnode();
    root->left->left=createnode();
    root->left->right=createnode();
    root->left->right->left=createnode();
    root->left->right->right=createnode();
    root->right->right=createnode();
    x=count(root);
    printf("\n count of roots %d",x);
    int y=countleafnodes(root);
    printf("\n count of leaf roots %d",y);
    z=Sum(root,&sum);
    printf("\n sum of data %d",z);
}