#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node* insertNode(struct node *root, int data) {
    if(root == NULL) {
        root = createNode(data);
    } else if(data <= root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}
void inorderTraversal(struct node *root) {
    if(root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d -> ", root->data);
    inorderTraversal(root->right);
}
struct node *min(struct node *root){
    if(root==NULL){
        printf("min value node doesnt exist");
        return NULL;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
struct node *max(struct node *root){
    if(root==NULL){
        printf("min value node doesnt exist");
        return NULL;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct node *dlt(struct node *root,int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data < val){
        root->right=dlt(root->right,val);
        return root;
    }
    else if(root->data > val){
        root->left=dlt(root->left,val);
        return root;
    }
    else{
        if(root->right==NULL && root->left==NULL){
            free(root);
            return NULL;
        }
        else if(root->right==NULL){
            struct node *temp=root->left;
            free(root);
            return temp;
        }
        else if(root->left==NULL){
            struct node *temp=root->right;
            free(root);
            return temp;
        }
        else{
            struct node *temp=min(root->right);
            root->data=temp->data;
            root->right=dlt(root->right,temp->data);
            return root;
        }
    }
}
int main() {
    struct node *root = NULL;
    root = insertNode(root, 10);
    root = insertNode(root, 8);
    root = insertNode(root, 12);
    root = insertNode(root, 6);
    root = insertNode(root, 9);
    root = insertNode(root, 11);
    root = insertNode(root, 14);
    
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    
    struct node *m=min(root);
    printf("\n min value node is %d",m->data);
    struct node *n=max(root);
    printf("\n max value node is %d",n->data);
    dlt(root,11);
    printf("\n Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");
    return 0;
}
