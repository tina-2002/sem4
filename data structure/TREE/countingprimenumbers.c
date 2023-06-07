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
int isPrime(int num){
    if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++){
      if (num % i == 0)
         { return 0; }
   }
   return 1;
}
void countprime(struct node *root,int *prime){
    if(root==NULL){
        return;
    }

    if(isPrime(root->data)){
            *prime=*prime+1;
    }
    countprime(root->left,prime);
    countprime(root->right,prime);
}
int main(){
    struct node *root;
    int prime=0;
    root=createnode();
    root->left=createnode();
    root->right=createnode();
    root->left->left=createnode();
    root->left->right=createnode();
    root->left->right->left=createnode();
    root->left->right->right=createnode();
    root->right->right=createnode();
    countprime(root,&prime);
    printf("\n number of prime numbers: %d",prime);
}